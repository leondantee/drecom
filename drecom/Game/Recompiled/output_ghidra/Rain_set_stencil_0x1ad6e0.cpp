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

// Function: Rain_set_stencil
// Address: 0x1ad6e0 - 0x1ad7ec
void Rain_set_stencil_0x1ad6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Rain_set_stencil_0x1ad6e0");
#endif

    ctx->pc = 0x1ad6e0u;

    // 0x1ad6e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ad6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ad6e4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x1ad6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x1ad6e8: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1ad6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1ad6ec: 0x344300a0  ori         $v1, $v0, 0xA0
    ctx->pc = 0x1ad6ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)160);
    // 0x1ad6f0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1ad6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ad6f4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1ad6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1ad6f8: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x1ad6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1ad6fc: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1ad6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ad700: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1ad700u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1ad704: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1ad704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ad708: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1ad708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1ad70c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1ad70cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1ad710: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x1ad710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x1ad714: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1ad714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ad718: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1ad718u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1ad71c: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x1ad71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1ad720: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1ad720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ad724: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1ad724u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1ad728: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1ad728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ad72c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1ad72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1ad730: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1ad730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1ad734: 0x24030206  addiu       $v1, $zero, 0x206
    ctx->pc = 0x1ad734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 518));
    // 0x1ad738: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1ad738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ad73c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1ad73cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1ad740: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1ad740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ad744: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x1ad744u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x1ad748: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1ad748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ad74c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1ad74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1ad750: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1ad750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1ad754: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1ad754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1ad758: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1ad758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ad75c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1ad75cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1ad760: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ad760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ad764: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ad764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ad768: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1ad768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ad76c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1ad76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1ad770: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ad770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad774: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1ad774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ad778: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1ad778u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1ad77c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1ad77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ad780: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1ad780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1ad784: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1ad784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1ad788: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1ad788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1ad78c: 0x34437000  ori         $v1, $v0, 0x7000
    ctx->pc = 0x1ad78cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1ad790: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1ad790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ad794: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1ad794u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1ad798: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1ad798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ad79c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1ad79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ad7a0: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1ad7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1ad7a4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1ad7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ad7a8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1ad7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1ad7ac: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1ad7acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1ad7b0: 0x34028700  ori         $v0, $zero, 0x8700
    ctx->pc = 0x1ad7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
    // 0x1ad7b4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1ad7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1ad7b8: 0x34439000  ori         $v1, $v0, 0x9000
    ctx->pc = 0x1ad7b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1ad7bc: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1ad7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ad7c0: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1ad7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1ad7c4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1ad7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ad7c8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1ad7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ad7cc: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1ad7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1ad7d0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1ad7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ad7d4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1ad7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1ad7d8: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1ad7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1ad7dc: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1ad7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ad7e0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1ad7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ad7e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD7E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD7E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD7ECu;
}
