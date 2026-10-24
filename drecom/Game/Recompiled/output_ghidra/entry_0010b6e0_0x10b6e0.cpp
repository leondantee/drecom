#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0010b6e0
// Address: 0x10b6e0 - 0x10b788
void entry_0010b6e0_0x10b6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b6e0_0x10b6e0");
#endif

    ctx->pc = 0x10b6e0u;

label_10b6e0:
    // 0x10b6e0: 0x42000039  di
    ctx->pc = 0x10b6e0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x10b6e4: 0x40f  sync.p
    ctx->pc = 0x10b6e4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10b6e8: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x10b6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x10b6ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10b6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x10b6f0: 0x0  nop
    ctx->pc = 0x10b6f0u;
    // NOP
    // 0x10b6f4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10B6F4u;
    {
        const bool branch_taken_0x10b6f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10b6f4) {
            ctx->pc = 0x10B6E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10b6e0;
        }
    }
    ctx->pc = 0x10B6FCu;
    // 0x10b6fc: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x10b6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x10b700: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x10b700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x10b704: 0x34c6f520  ori         $a2, $a2, 0xF520
    ctx->pc = 0x10b704u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62752);
    // 0x10b708: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x10b708u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10b70c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x10b70cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x10b710: 0x34a5f590  ori         $a1, $a1, 0xF590
    ctx->pc = 0x10b710u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62864);
    // 0x10b714: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x10b714u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x10b718: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x10b718u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
    // 0x10b71c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x10b71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x10b720: 0x34e7b400  ori         $a3, $a3, 0xB400
    ctx->pc = 0x10b720u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)46080);
    // 0x10b724: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x10b724u;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 2));
    // 0x10b728: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10b728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b72c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x10b72cu;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 3));
    // 0x10b730: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x10b730u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x10b734: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x10b734u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x10b738: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x10b738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x10b73c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x10b73cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x10b740: 0x42000038  ei
    ctx->pc = 0x10b740u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x10b744: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10b744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10b748: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10b748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10b74c: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x10b74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x10b750: 0x3463b430  ori         $v1, $v1, 0xB430
    ctx->pc = 0x10b750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46128);
    // 0x10b754: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x10b754u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x1000B410u));
    // 0x10b758: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10b758u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10b75c: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x10b75cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x10b760: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x10b760u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x10b764: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x10b764u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x10b768: 0x34c62010  ori         $a2, $a2, 0x2010
    ctx->pc = 0x10b768u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8208);
    // 0x10b76c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10b76cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000B430u));
    // 0x10b770: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x10b770u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x10b774: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x10b774u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B420u));
    // 0x10b778: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x10b778u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x10b77c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x10b77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x10b780: 0xad02000c  sw          $v0, 0xC($t0)
    ctx->pc = 0x10b780u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
    // 0x10b784: 0x0  nop
    ctx->pc = 0x10b784u;
    // NOP
    ctx->pc = 0x10b788u;
}
