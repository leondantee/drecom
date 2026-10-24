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

// Function: Camera_spiral
// Address: 0x183930 - 0x1839f8
void Camera_spiral_0x183930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Camera_spiral_0x183930");
#endif

    switch (ctx->pc) {
        case 0x18397cu: goto label_18397c;
        case 0x1839d8u: goto label_1839d8;
        case 0x1839e4u: goto label_1839e4;
        default: break;
    }

    ctx->pc = 0x183930u;

    // 0x183930: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x183930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
    // 0x183934: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x183934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x183938: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x183938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18393c: 0xafa401f8  sw          $a0, 0x1F8($sp)
    ctx->pc = 0x18393cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 4));
    // 0x183940: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x183940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x183944: 0x8c300af0  lw          $s0, 0xAF0($at)
    ctx->pc = 0x183944u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x183948: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x183948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18394c: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x18394cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x183950: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x183950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x183954: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x183954u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x183958: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x183958u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x18395c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18395cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x183960: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x183960u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x183964: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x183964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x183968: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x183968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x18396c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x18396cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x183970: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x183970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x183974: 0xc05f728  jal         func_17DCA0
    ctx->pc = 0x183974u;
    SET_GPR_U32(ctx, 31, 0x18397Cu);
    ctx->pc = 0x17DCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DCA0u, 0x183974u, 0x18397Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18397Cu;
label_18397c:
    // 0x18397c: 0x27a201c0  addiu       $v0, $sp, 0x1C0
    ctx->pc = 0x18397cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x183980: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x183980u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183984: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x183984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x183988: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x183988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x18398c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x18398cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x183990: 0x27a201b0  addiu       $v0, $sp, 0x1B0
    ctx->pc = 0x183990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x183994: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x183994u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183998: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x183998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x18399c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x18399cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1839a0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1839a0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1839a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1839a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1839a8: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x1839a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x1839ac: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x1839acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x1839b0: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x1839b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x1839b4: 0x8c4200b8  lw          $v0, 0xB8($v0)
    ctx->pc = 0x1839b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x1839b8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1839B8u;
    {
        const bool branch_taken_0x1839b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1839b8) {
            ctx->pc = 0x1839CCu;
            goto label_1839cc;
        }
    }
    ctx->pc = 0x1839C0u;
    // 0x1839c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1839c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1839c4: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x1839c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x1839c8: 0xac4300b8  sw          $v1, 0xB8($v0)
    ctx->pc = 0x1839c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 184), GPR_U32(ctx, 3));
label_1839cc:
    // 0x1839cc: 0x8fa401f8  lw          $a0, 0x1F8($sp)
    ctx->pc = 0x1839ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x1839d0: 0xc05f8f8  jal         func_17E3E0
    ctx->pc = 0x1839D0u;
    SET_GPR_U32(ctx, 31, 0x1839D8u);
    ctx->pc = 0x17E3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E3E0u, 0x1839D0u, 0x1839D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1839D8u;
label_1839d8:
    // 0x1839d8: 0x8fa401f8  lw          $a0, 0x1F8($sp)
    ctx->pc = 0x1839d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x1839dc: 0xc05f910  jal         func_17E440
    ctx->pc = 0x1839DCu;
    SET_GPR_U32(ctx, 31, 0x1839E4u);
    ctx->pc = 0x17E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E440u, 0x1839DCu, 0x1839E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1839E4u;
label_1839e4:
    // 0x1839e4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1839e4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1839e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1839e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1839ec: 0x27bd0200  addiu       $sp, $sp, 0x200
    ctx->pc = 0x1839ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1839f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1839F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1839F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1839F8u;
}
