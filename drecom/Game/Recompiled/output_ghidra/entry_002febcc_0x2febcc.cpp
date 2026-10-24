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

// Function: entry_002febcc
// Address: 0x2febcc - 0x2fec80
void entry_002febcc_0x2febcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002febcc_0x2febcc");
#endif

    switch (ctx->pc) {
        case 0x2fec18u: goto label_2fec18;
        case 0x2fec24u: goto label_2fec24;
        default: break;
    }

    ctx->pc = 0x2febccu;

    // 0x2febcc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2febccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2febd0: 0x8c4200d4  lw          $v0, 0xD4($v0)
    ctx->pc = 0x2febd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x2febd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2febd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2febd8: 0x0  nop
    ctx->pc = 0x2febd8u;
    // NOP
    // 0x2febdc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2febdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2febe0: 0x3c02c4e6  lui         $v0, 0xC4E6
    ctx->pc = 0x2febe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50406 << 16));
    // 0x2febe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2febe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2febe8: 0x0  nop
    ctx->pc = 0x2febe8u;
    // NOP
    // 0x2febec: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2febecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2febf0: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2febf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2febf4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2febf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2febf8: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2febf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2febfc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2febfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2fec00: 0x24040428  addiu       $a0, $zero, 0x428
    ctx->pc = 0x2fec00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1064));
    // 0x2fec04: 0x244500b0  addiu       $a1, $v0, 0xB0
    ctx->pc = 0x2fec04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x2fec08: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2fec08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2fec0c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2fec0cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fec10: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FEC10u;
    SET_GPR_U32(ctx, 31, 0x2FEC18u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FEC10u, 0x2FEC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEC18u;
label_2fec18:
    // 0x2fec18: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fec18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fec1c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FEC1Cu;
    SET_GPR_U32(ctx, 31, 0x2FEC24u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FEC1Cu, 0x2FEC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEC24u;
label_2fec24:
    // 0x2fec24: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2fec24u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fec28: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x2fec28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fec2c: 0x3c03c238  lui         $v1, 0xC238
    ctx->pc = 0x2fec2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49720 << 16));
    // 0x2fec30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fec30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fec34: 0x0  nop
    ctx->pc = 0x2fec34u;
    // NOP
    // 0x2fec38: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2fec38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2fec3c: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2fec3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2fec40: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x2fec40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fec44: 0x3c033ccc  lui         $v1, 0x3CCC
    ctx->pc = 0x2fec44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15564 << 16));
    // 0x2fec48: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2fec48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2fec4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fec4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fec50: 0x0  nop
    ctx->pc = 0x2fec50u;
    // NOP
    // 0x2fec54: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2fec54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2fec58: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x2fec58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x2fec5c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2fec5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2fec60: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2fec60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2fec64: 0x12030006  beq         $s0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FEC64u;
    {
        const bool branch_taken_0x2fec64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2fec64) {
            ctx->pc = 0x2FEC80u;
            return;
        }
    }
    ctx->pc = 0x2FEC6Cu;
    // 0x2fec6c: 0xc60100f4  lwc1        $f1, 0xF4($s0)
    ctx->pc = 0x2fec6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fec70: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x2fec70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fec74: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2fec74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2fec78: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2fec78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2fec7c: 0x0  nop
    ctx->pc = 0x2fec7cu;
    // NOP
    ctx->pc = 0x2fec80u;
}
