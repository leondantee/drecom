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

// Function: entry_0030207c
// Address: 0x30207c - 0x302124
void entry_0030207c_0x30207c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030207c_0x30207c");
#endif

    switch (ctx->pc) {
        case 0x3020c0u: goto label_3020c0;
        default: break;
    }

    ctx->pc = 0x30207cu;

    // 0x30207c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30207cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302080: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x302080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x302084: 0x8c23efa8  lw          $v1, -0x1058($at)
    ctx->pc = 0x302084u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EEFA8u));
    // 0x302088: 0x14830052  bne         $a0, $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x302088u;
    {
        const bool branch_taken_0x302088 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x302088) {
            ctx->pc = 0x3021D4u;
            return;
        }
    }
    ctx->pc = 0x302090u;
    // 0x302090: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x302090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x302094: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x302094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x302098: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x302098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30209c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30209cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3020a0: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x3020a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3020a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3020a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3020a8: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x3020a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x3020ac: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x3020acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3020b0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x3020b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x3020b4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x3020b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x3020b8: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x3020B8u;
    SET_GPR_U32(ctx, 31, 0x3020C0u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x3020B8u, 0x3020C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3020C0u;
label_3020c0:
    // 0x3020c0: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x3020C0u;
    {
        const bool branch_taken_0x3020c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3020c0) {
            ctx->pc = 0x3021D4u;
            return;
        }
    }
    ctx->pc = 0x3020C8u;
    // 0x3020c8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3020c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3020cc: 0x8c631340  lw          $v1, 0x1340($v1)
    ctx->pc = 0x3020ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4928)));
    // 0x3020d0: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3020D0u;
    {
        const bool branch_taken_0x3020d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3020d0) {
            ctx->pc = 0x302124u;
            return;
        }
    }
    ctx->pc = 0x3020D8u;
    // 0x3020d8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3020d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3020dc: 0x8c631338  lw          $v1, 0x1338($v1)
    ctx->pc = 0x3020dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x3020e0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3020e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3020e4: 0x1460003b  bnez        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x3020E4u;
    {
        const bool branch_taken_0x3020e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3020e4) {
            ctx->pc = 0x3021D4u;
            return;
        }
    }
    ctx->pc = 0x3020ECu;
    // 0x3020ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3020ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3020f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3020f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3020f4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3020f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3020f8: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x3020f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3020fc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3020fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302100: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x302100u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x302104: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302108: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x302108u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30210c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30210cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302110: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x302110u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x302114: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302118: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x302118u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x30211c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x30211Cu;
    {
        const bool branch_taken_0x30211c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30211c) {
            ctx->pc = 0x3021D4u;
            return;
        }
    }
    ctx->pc = 0x302124u;
}
