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

// Function: entry_0032d7c8
// Address: 0x32d7c8 - 0x32d8d4
void entry_0032d7c8_0x32d7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032d7c8_0x32d7c8");
#endif

    switch (ctx->pc) {
        case 0x32d864u: goto label_32d864;
        default: break;
    }

    ctx->pc = 0x32d7c8u;

    // 0x32d7c8: 0x2aa20002  slti        $v0, $s5, 0x2
    ctx->pc = 0x32d7c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x32d7cc: 0x1440fe2e  bnez        $v0, . + 4 + (-0x1D2 << 2)
    ctx->pc = 0x32D7CCu;
    {
        const bool branch_taken_0x32d7cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32d7cc) {
            ctx->pc = 0x32D088u;
            return;
        }
    }
    ctx->pc = 0x32D7D4u;
    // 0x32d7d4: 0x92222909  lbu         $v0, 0x2909($s1)
    ctx->pc = 0x32d7d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10505)));
    // 0x32d7d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x32d7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32d7dc: 0x28410010  slti        $at, $v0, 0x10
    ctx->pc = 0x32d7dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x32d7e0: 0x142000a5  bnez        $at, . + 4 + (0xA5 << 2)
    ctx->pc = 0x32D7E0u;
    {
        const bool branch_taken_0x32d7e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x32d7e0) {
            ctx->pc = 0x32DA78u;
            return;
        }
    }
    ctx->pc = 0x32D7E8u;
    // 0x32d7e8: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32d7e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32d7ec: 0x8c22af78  lw          $v0, -0x5088($at)
    ctx->pc = 0x32d7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x85AF78u));
    // 0x32d7f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d7f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d7f4: 0x0  nop
    ctx->pc = 0x32d7f4u;
    // NOP
    // 0x32d7f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32d7f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32d7fc: 0xe6202824  swc1        $f0, 0x2824($s1)
    ctx->pc = 0x32d7fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 10276), bits); }
    // 0x32d800: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32d800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32d804: 0xa2222904  sb          $v0, 0x2904($s1)
    ctx->pc = 0x32d804u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10500), (uint8_t)GPR_U32(ctx, 2));
    // 0x32d808: 0xa2202909  sb          $zero, 0x2909($s1)
    ctx->pc = 0x32d808u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10505), (uint8_t)GPR_U32(ctx, 0));
    // 0x32d80c: 0xa2202905  sb          $zero, 0x2905($s1)
    ctx->pc = 0x32d80cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10501), (uint8_t)GPR_U32(ctx, 0));
    // 0x32d810: 0x8622290a  lh          $v0, 0x290A($s1)
    ctx->pc = 0x32d810u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10506)));
    // 0x32d814: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x32d814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32d818: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x32d818u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x32d81c: 0x8622290c  lh          $v0, 0x290C($s1)
    ctx->pc = 0x32d81cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10508)));
    // 0x32d820: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x32d820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32d824: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x32d824u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x32d828: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x32d828u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32d82c: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32d82cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32d830: 0xac22c2a0  sw          $v0, -0x3D60($at)
    ctx->pc = 0x32d830u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x85C2A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85C2A0u, _value); } while (0);
    // 0x32d834: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32d834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32d838: 0x8c22c2a0  lw          $v0, -0x3D60($at)
    ctx->pc = 0x32d838u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x85C2A0u));
    // 0x32d83c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d83cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d840: 0x0  nop
    ctx->pc = 0x32d840u;
    // NOP
    // 0x32d844: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32d844u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32d848: 0x3c023e51  lui         $v0, 0x3E51
    ctx->pc = 0x32d848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15953 << 16));
    // 0x32d84c: 0x3443b718  ori         $v1, $v0, 0xB718
    ctx->pc = 0x32d84cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46872);
    // 0x32d850: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32d850u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d854: 0x0  nop
    ctx->pc = 0x32d854u;
    // NOP
    // 0x32d858: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32d858u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32d85c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32D85Cu;
    SET_GPR_U32(ctx, 31, 0x32D864u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32D85Cu, 0x32D864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D864u;
label_32d864:
    // 0x32d864: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32d864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32d868: 0xac22c2a0  sw          $v0, -0x3D60($at)
    ctx->pc = 0x32d868u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x85C2A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85C2A0u, _value); } while (0);
    // 0x32d86c: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32d86cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32d870: 0x8c23c2a0  lw          $v1, -0x3D60($at)
    ctx->pc = 0x32d870u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x85C2A0u));
    // 0x32d874: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32d874u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d878: 0x0  nop
    ctx->pc = 0x32d878u;
    // NOP
    // 0x32d87c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32d87cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32d880: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x32d880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
    // 0x32d884: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d884u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d888: 0x0  nop
    ctx->pc = 0x32d888u;
    // NOP
    // 0x32d88c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x32d88cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32d890: 0x0  nop
    ctx->pc = 0x32d890u;
    // NOP
    // 0x32d894: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x32D894u;
    {
        const bool branch_taken_0x32d894 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32d894) {
            ctx->pc = 0x32D8D4u;
            return;
        }
    }
    ctx->pc = 0x32D89Cu;
    // 0x32d89c: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32d89cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32d8a0: 0x8c23c2a0  lw          $v1, -0x3D60($at)
    ctx->pc = 0x32d8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x85C2A0u));
    // 0x32d8a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32d8a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d8a8: 0x0  nop
    ctx->pc = 0x32d8a8u;
    // NOP
    // 0x32d8ac: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32d8acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32d8b0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x32d8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x32d8b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d8b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d8b8: 0x0  nop
    ctx->pc = 0x32d8b8u;
    // NOP
    // 0x32d8bc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x32d8bcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x32d8c0: 0x0  nop
    ctx->pc = 0x32d8c0u;
    // NOP
    // 0x32d8c4: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32d8c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32d8c8: 0xe420c2a8  swc1        $f0, -0x3D58($at)
    ctx->pc = 0x32d8c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x85C2A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85C2A8u, _value); } while (0); }
    // 0x32d8cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x32D8CCu;
    {
        const bool branch_taken_0x32d8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d8cc) {
            ctx->pc = 0x32D8E8u;
            return;
        }
    }
    ctx->pc = 0x32D8D4u;
}
