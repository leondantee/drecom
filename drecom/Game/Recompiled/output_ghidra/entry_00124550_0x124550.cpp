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

// Function: entry_00124550
// Address: 0x124550 - 0x124608
void entry_00124550_0x124550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124550_0x124550");
#endif

    switch (ctx->pc) {
        case 0x124570u: goto label_124570;
        case 0x124598u: goto label_124598;
        case 0x1245c0u: goto label_1245c0;
        default: break;
    }

    ctx->pc = 0x124550u;

    // 0x124550: 0xa280004c  sb          $zero, 0x4C($s4)
    ctx->pc = 0x124550u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x124554: 0xa2800054  sb          $zero, 0x54($s4)
    ctx->pc = 0x124554u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 84), (uint8_t)GPR_U32(ctx, 0));
    // 0x124558: 0xa280005c  sb          $zero, 0x5C($s4)
    ctx->pc = 0x124558u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 92), (uint8_t)GPR_U32(ctx, 0));
    // 0x12455c: 0xa2800064  sb          $zero, 0x64($s4)
    ctx->pc = 0x12455cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 100), (uint8_t)GPR_U32(ctx, 0));
    // 0x124560: 0xa280006c  sb          $zero, 0x6C($s4)
    ctx->pc = 0x124560u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 108), (uint8_t)GPR_U32(ctx, 0));
    // 0x124564: 0xa2800074  sb          $zero, 0x74($s4)
    ctx->pc = 0x124564u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 116), (uint8_t)GPR_U32(ctx, 0));
    // 0x124568: 0xc067694  jal         func_19DA50
    ctx->pc = 0x124568u;
    SET_GPR_U32(ctx, 31, 0x124570u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x124568u, 0x124570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124570u;
label_124570:
    // 0x124570: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x124570u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x124574: 0x3083001f  andi        $v1, $a0, 0x1F
    ctx->pc = 0x124574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x124578: 0x39e3c  dsll32      $s3, $v1, 24
    ctx->pc = 0x124578u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) << (32 + 24));
    // 0x12457c: 0x139e3f  dsra32      $s3, $s3, 24
    ctx->pc = 0x12457cu;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 24));
    // 0x124580: 0xa2930056  sb          $s3, 0x56($s4)
    ctx->pc = 0x124580u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 86), (uint8_t)GPR_U32(ctx, 19));
    // 0x124584: 0x13163c  dsll32      $v0, $s3, 24
    ctx->pc = 0x124584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 24));
    // 0x124588: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x124588u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x12458c: 0xa282004e  sb          $v0, 0x4E($s4)
    ctx->pc = 0x12458cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x124590: 0xc067694  jal         func_19DA50
    ctx->pc = 0x124590u;
    SET_GPR_U32(ctx, 31, 0x124598u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x124590u, 0x124598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124598u;
label_124598:
    // 0x124598: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x124598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12459c: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x12459cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1245a0: 0x3163c  dsll32      $v0, $v1, 24
    ctx->pc = 0x1245a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1245a4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1245a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1245a8: 0xa2820066  sb          $v0, 0x66($s4)
    ctx->pc = 0x1245a8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 102), (uint8_t)GPR_U32(ctx, 2));
    // 0x1245ac: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1245acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1245b0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1245b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1245b4: 0xa282005e  sb          $v0, 0x5E($s4)
    ctx->pc = 0x1245b4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 94), (uint8_t)GPR_U32(ctx, 2));
    // 0x1245b8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1245B8u;
    SET_GPR_U32(ctx, 31, 0x1245C0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1245B8u, 0x1245C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1245C0u;
label_1245c0:
    // 0x1245c0: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1245c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1245c4: 0x30a4001f  andi        $a0, $a1, 0x1F
    ctx->pc = 0x1245c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x1245c8: 0x41e3c  dsll32      $v1, $a0, 24
    ctx->pc = 0x1245c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
    // 0x1245cc: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1245ccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1245d0: 0xa2830076  sb          $v1, 0x76($s4)
    ctx->pc = 0x1245d0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 118), (uint8_t)GPR_U32(ctx, 3));
    // 0x1245d4: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1245d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1245d8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1245d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1245dc: 0xa283006e  sb          $v1, 0x6E($s4)
    ctx->pc = 0x1245dcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 110), (uint8_t)GPR_U32(ctx, 3));
    // 0x1245e0: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x1245e0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1245e4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1245e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1245e8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1245e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1245ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1245ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1245f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1245f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1245f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1245f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1245f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1245f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1245fc: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x1245fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x124600: 0x3e00008  jr          $ra
    ctx->pc = 0x124600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124608u;
}
