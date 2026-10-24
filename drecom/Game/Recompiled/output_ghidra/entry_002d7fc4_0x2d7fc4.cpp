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

// Function: entry_002d7fc4
// Address: 0x2d7fc4 - 0x2d808c
void entry_002d7fc4_0x2d7fc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d7fc4_0x2d7fc4");
#endif

    switch (ctx->pc) {
        case 0x2d7fe8u: goto label_2d7fe8;
        case 0x2d8044u: goto label_2d8044;
        case 0x2d8084u: goto label_2d8084;
        default: break;
    }

    ctx->pc = 0x2d7fc4u;

    // 0x2d7fc4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d7fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d7fc8: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x2d7fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2d7fcc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2d7fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2d7fd0: 0x8c25df28  lw          $a1, -0x20D8($at)
    ctx->pc = 0x2d7fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3EDF28u));
    // 0x2d7fd4: 0x24060043  addiu       $a2, $zero, 0x43
    ctx->pc = 0x2d7fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x2d7fd8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d7fd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7fdc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d7fdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d7fe0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D7FE0u;
    SET_GPR_U32(ctx, 31, 0x2D7FE8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D7FE0u, 0x2D7FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7FE8u;
label_2d7fe8:
    // 0x2d7fe8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2d7fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2d7fec: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2d7fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d7ff0: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x2d7ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d7ff4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d7ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d7ff8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d7ff8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d7ffc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d7ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d8000: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d8000u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d8004: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x2d8004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x2d8008: 0x24420430  addiu       $v0, $v0, 0x430
    ctx->pc = 0x2d8008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1072));
    // 0x2d800c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2d800cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d8010: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2d8010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8014: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x2d8014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2d8018: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2d8018u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2d801c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d801cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8020: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x2d8020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d8024: 0x3c024402  lui         $v0, 0x4402
    ctx->pc = 0x2d8024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17410 << 16));
    // 0x2d8028: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d8028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d802c: 0x0  nop
    ctx->pc = 0x2d802cu;
    // NOP
    // 0x2d8030: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d8030u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d8034: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x2d8034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x2d8038: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2d8038u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d803c: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x2D803Cu;
    SET_GPR_U32(ctx, 31, 0x2D8044u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x2D803Cu, 0x2D8044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8044u;
label_2d8044:
    // 0x2d8044: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2d8044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8048: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2d8048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2d804c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2d804cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2d8050: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2d8050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2d8054: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2d8054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2d8058: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d8058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2d805c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2d805cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d8060: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2d8060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2d8064: 0x34440106  ori         $a0, $v0, 0x106
    ctx->pc = 0x2d8064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x2d8068: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2d8068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d806c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2d806cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d8070: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2d8070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d8074: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x2d8074u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d8078: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2d8078u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d807c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2D807Cu;
    SET_GPR_U32(ctx, 31, 0x2D8084u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2D807Cu, 0x2D8084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8084u;
label_2d8084:
    // 0x2d8084: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2D8084u;
    {
        const bool branch_taken_0x2d8084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8084) {
            ctx->pc = 0x2D8148u;
            return;
        }
    }
    ctx->pc = 0x2D808Cu;
}
