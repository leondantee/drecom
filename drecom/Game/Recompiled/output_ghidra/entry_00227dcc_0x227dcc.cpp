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

// Function: entry_00227dcc
// Address: 0x227dcc - 0x227ec4
void entry_00227dcc_0x227dcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00227dcc_0x227dcc");
#endif

    switch (ctx->pc) {
        case 0x227e14u: goto label_227e14;
        case 0x227e34u: goto label_227e34;
        default: break;
    }

    ctx->pc = 0x227dccu;

    // 0x227dcc: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x227dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x227dd0: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x227dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x227dd4: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x227dd4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x227dd8: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x227dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x227ddc: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x227ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x227de0: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x227de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227de4: 0x3c05447a  lui         $a1, 0x447A
    ctx->pc = 0x227de4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17530 << 16));
    // 0x227de8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x227de8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227dec: 0x0  nop
    ctx->pc = 0x227decu;
    // NOP
    // 0x227df0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x227df0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x227df4: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x227df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x227df8: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x227df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x227dfc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x227dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x227e00: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x227e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x227e04: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x227e04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x227e08: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x227e08u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x227e0c: 0xc059e1c  jal         func_167870
    ctx->pc = 0x227E0Cu;
    SET_GPR_U32(ctx, 31, 0x227E14u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x227E0Cu, 0x227E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227E14u;
label_227e14:
    // 0x227e14: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x227e14u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x227e18: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x227e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x227e1c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x227e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x227e20: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x227e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x227e24: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x227e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x227e28: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x227e28u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x227e2c: 0xc059e1c  jal         func_167870
    ctx->pc = 0x227E2Cu;
    SET_GPR_U32(ctx, 31, 0x227E34u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x227E2Cu, 0x227E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227E34u;
label_227e34:
    // 0x227e34: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x227e34u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x227e38: 0x16800022  bnez        $s4, . + 4 + (0x22 << 2)
    ctx->pc = 0x227E38u;
    {
        const bool branch_taken_0x227e38 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x227e38) {
            ctx->pc = 0x227EC4u;
            return;
        }
    }
    ctx->pc = 0x227E40u;
    // 0x227e40: 0x16a00020  bnez        $s5, . + 4 + (0x20 << 2)
    ctx->pc = 0x227E40u;
    {
        const bool branch_taken_0x227e40 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x227e40) {
            ctx->pc = 0x227EC4u;
            return;
        }
    }
    ctx->pc = 0x227E48u;
    // 0x227e48: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x227e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227e4c: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x227e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x227e50: 0xc4a10098  lwc1        $f1, 0x98($a1)
    ctx->pc = 0x227e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227e54: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x227e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227e58: 0xc4800184  lwc1        $f0, 0x184($a0)
    ctx->pc = 0x227e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227e5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x227e5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x227e60: 0xe4800184  swc1        $f0, 0x184($a0)
    ctx->pc = 0x227e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 388), bits); }
    // 0x227e64: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x227e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227e68: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x227e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x227e6c: 0xc4810098  lwc1        $f1, 0x98($a0)
    ctx->pc = 0x227e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227e70: 0x3c053dcc  lui         $a1, 0x3DCC
    ctx->pc = 0x227e70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15820 << 16));
    // 0x227e74: 0x34a3cccd  ori         $v1, $a1, 0xCCCD
    ctx->pc = 0x227e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
    // 0x227e78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x227e78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227e7c: 0x0  nop
    ctx->pc = 0x227e7cu;
    // NOP
    // 0x227e80: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x227e80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x227e84: 0xe4800098  swc1        $f0, 0x98($a0)
    ctx->pc = 0x227e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x227e88: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x227e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227e8c: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x227e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x227e90: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x227e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227e94: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x227e94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x227e98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x227e98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227e9c: 0x0  nop
    ctx->pc = 0x227e9cu;
    // NOP
    // 0x227ea0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x227ea0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227ea4: 0x0  nop
    ctx->pc = 0x227ea4u;
    // NOP
    // 0x227ea8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x227EA8u;
    {
        const bool branch_taken_0x227ea8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x227ea8) {
            ctx->pc = 0x227EC4u;
            return;
        }
    }
    ctx->pc = 0x227EB0u;
    // 0x227eb0: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x227eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x227eb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x227eb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227eb8: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x227eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227ebc: 0x24a41330  addiu       $a0, $a1, 0x1330
    ctx->pc = 0x227ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x227ec0: 0xe4800098  swc1        $f0, 0x98($a0)
    ctx->pc = 0x227ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    ctx->pc = 0x227ec4u;
}
