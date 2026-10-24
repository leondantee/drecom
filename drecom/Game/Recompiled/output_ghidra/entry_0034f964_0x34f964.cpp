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

// Function: entry_0034f964
// Address: 0x34f964 - 0x34fa20
void entry_0034f964_0x34f964(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034f964_0x34f964");
#endif

    switch (ctx->pc) {
        case 0x34f970u: goto label_34f970;
        case 0x34f9bcu: goto label_34f9bc;
        case 0x34f9c8u: goto label_34f9c8;
        default: break;
    }

    ctx->pc = 0x34f964u;

    // 0x34f964: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34f964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f968: 0xc05cd10  jal         func_173440
    ctx->pc = 0x34F968u;
    SET_GPR_U32(ctx, 31, 0x34F970u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x34F968u, 0x34F970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F970u;
label_34f970:
    // 0x34f970: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34f970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f974: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f978: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x34f978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f97c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34f97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f980: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x34f980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f984: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34f984u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34f988: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x34f988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x34f98c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34f98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f990: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34f990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f994: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x34f994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f998: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x34f998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x34f99c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f99cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f9a0: 0x0  nop
    ctx->pc = 0x34f9a0u;
    // NOP
    // 0x34f9a4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x34f9a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34f9a8: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x34f9a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x34f9ac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34f9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f9b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34f9b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34f9b4: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34F9B4u;
    SET_GPR_U32(ctx, 31, 0x34F9BCu);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34F9B4u, 0x34F9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F9BCu;
label_34f9bc:
    // 0x34f9bc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34f9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f9c0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34F9C0u;
    SET_GPR_U32(ctx, 31, 0x34F9C8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34F9C0u, 0x34F9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F9C8u;
label_34f9c8:
    // 0x34f9c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34f9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f9cc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34f9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34f9d0: 0xc4610088  lwc1        $f1, 0x88($v1)
    ctx->pc = 0x34f9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f9d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34f9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f9d8: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x34f9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f9dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34f9dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34f9e0: 0x0  nop
    ctx->pc = 0x34f9e0u;
    // NOP
    // 0x34f9e4: 0x4501003c  bc1t        . + 4 + (0x3C << 2)
    ctx->pc = 0x34F9E4u;
    {
        const bool branch_taken_0x34f9e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34f9e4) {
            ctx->pc = 0x34FAD8u;
            return;
        }
    }
    ctx->pc = 0x34F9ECu;
    // 0x34f9ec: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x34f9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x34f9f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34f9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f9f4: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x34f9f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x34f9f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34f9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f9fc: 0xa460127e  sh          $zero, 0x127E($v1)
    ctx->pc = 0x34f9fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x34fa00: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34fa00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fa04: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x34fa04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34fa08: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x34fa08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x34fa0c: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x34fa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x34fa10: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x34fa10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x34fa14: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x34fa14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x34fa18: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x34FA18u;
    {
        const bool branch_taken_0x34fa18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fa18) {
            ctx->pc = 0x34FAD8u;
            return;
        }
    }
    ctx->pc = 0x34FA20u;
}
