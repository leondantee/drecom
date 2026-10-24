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

// Function: entry_00109f28
// Address: 0x109f28 - 0x109fc8
void entry_00109f28_0x109f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109f28_0x109f28");
#endif

    ctx->pc = 0x109f28u;

label_109f28:
    // 0x109f28: 0x42000039  di
    ctx->pc = 0x109f28u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x109f2c: 0x40f  sync.p
    ctx->pc = 0x109f2cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x109f30: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x109f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x109f34: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x109f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x109f38: 0x0  nop
    ctx->pc = 0x109f38u;
    // NOP
    // 0x109f3c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x109F3Cu;
    {
        const bool branch_taken_0x109f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x109f3c) {
            ctx->pc = 0x109F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109f28;
        }
    }
    ctx->pc = 0x109F44u;
    // 0x109f44: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x109f44u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x109f48: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x109f48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x109f4c: 0x3529f520  ori         $t1, $t1, 0xF520
    ctx->pc = 0x109f4cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)62752);
    // 0x109f50: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x109f50u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x109f54: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x109f54u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x109f58: 0x3508f590  ori         $t0, $t0, 0xF590
    ctx->pc = 0x109f58u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)62864);
    // 0x109f5c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x109f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x109f60: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x109f60u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x109f64: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x109f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x109f68: 0x34a5b000  ori         $a1, $a1, 0xB000
    ctx->pc = 0x109f68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45056);
    // 0x109f6c: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x109f6cu;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 2));
    // 0x109f70: 0x34e7feff  ori         $a3, $a3, 0xFEFF
    ctx->pc = 0x109f70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65279);
    // 0x109f74: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x109f74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x109f78: 0x3c06fffe  lui         $a2, 0xFFFE
    ctx->pc = 0x109f78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65534 << 16));
    // 0x109f7c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x109f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B000u));
    // 0x109f80: 0x3484b400  ori         $a0, $a0, 0xB400
    ctx->pc = 0x109f80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46080);
    // 0x109f84: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x109f84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x109f88: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x109f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x109f8c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x109f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x109f90: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x109f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x109f94: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x109f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x109f98: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x109f98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x109f9c: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x109f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x109fa0: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x109fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x109fa4: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x109fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x109fa8: 0x42000038  ei
    ctx->pc = 0x109fa8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x109fac: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x109facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x109fb0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x109fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x109fb4: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x109fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x109fb8: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x109fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46112);
    // 0x109fbc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x109fbcu;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 0));
    // 0x109fc0: 0x8042ea4  j           func_10BA90
    ctx->pc = 0x109FC0u;
    ctx->pc = 0x109FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109FC0u;
    // 0x109fc4: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BA90u;
    sceIpuInit_0x10ba90(rdram, ctx, runtime); return;
    ctx->pc = 0x109FC8u;
}
