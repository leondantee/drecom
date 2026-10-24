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

// Function: entry_0020b268
// Address: 0x20b268 - 0x20b2dc
void entry_0020b268_0x20b268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020b268_0x20b268");
#endif

    switch (ctx->pc) {
        case 0x20b2c4u: goto label_20b2c4;
        default: break;
    }

    ctx->pc = 0x20b268u;

    // 0x20b268: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x20b268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x20b26c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x20b26cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20b270: 0x3c0443c8  lui         $a0, 0x43C8
    ctx->pc = 0x20b270u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17352 << 16));
    // 0x20b274: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x20b274u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x20b278: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x20b278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x20b27c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x20b27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20b280: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x20b280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x20b284: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20b284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20b288: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x20b288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    // 0x20b28c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x20b28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20b290: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x20b290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x20b294: 0x3c0343af  lui         $v1, 0x43AF
    ctx->pc = 0x20b294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17327 << 16));
    // 0x20b298: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x20b298u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x20b29c: 0x326b00ff  andi        $t3, $s3, 0xFF
    ctx->pc = 0x20b29cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x20b2a0: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x20b2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b2a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20b2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b2a8: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x20b2a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x20b2ac: 0x8fa70188  lw          $a3, 0x188($sp)
    ctx->pc = 0x20b2acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b2b0: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x20b2b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20b2b4: 0x27a90110  addiu       $t1, $sp, 0x110
    ctx->pc = 0x20b2b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x20b2b8: 0x27aa0120  addiu       $t2, $sp, 0x120
    ctx->pc = 0x20b2b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x20b2bc: 0xc0bb7c0  jal         func_2EDF00
    ctx->pc = 0x20B2BCu;
    SET_GPR_U32(ctx, 31, 0x20B2C4u);
    ctx->pc = 0x2EDF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF00u, 0x20B2BCu, 0x20B2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B2C4u;
label_20b2c4:
    // 0x20b2c4: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x20b2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b2c8: 0x8c621374  lw          $v0, 0x1374($v1)
    ctx->pc = 0x20b2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4980)));
    // 0x20b2cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20b2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20b2d0: 0xac621374  sw          $v0, 0x1374($v1)
    ctx->pc = 0x20b2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4980), GPR_U32(ctx, 2));
    // 0x20b2d4: 0x10000114  b           . + 4 + (0x114 << 2)
    ctx->pc = 0x20B2D4u;
    {
        const bool branch_taken_0x20b2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b2d4) {
            ctx->pc = 0x20B728u;
            return;
        }
    }
    ctx->pc = 0x20B2DCu;
}
