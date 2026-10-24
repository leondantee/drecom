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

// Function: entry_001d5c90
// Address: 0x1d5c90 - 0x1d5e50
void entry_001d5c90_0x1d5c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5c90_0x1d5c90");
#endif

    switch (ctx->pc) {
        case 0x1d5d50u: goto label_1d5d50;
        case 0x1d5d64u: goto label_1d5d64;
        case 0x1d5d70u: goto label_1d5d70;
        default: break;
    }

    ctx->pc = 0x1d5c90u;

    // 0x1d5c90: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x1d5c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1d5c94: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d5c94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d5c98: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x1d5c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5c9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d5c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d5ca0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1d5ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1d5ca4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d5ca4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d5ca8: 0xc44009dc  lwc1        $f0, 0x9DC($v0)
    ctx->pc = 0x1d5ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5cac: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1d5cacu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1d5cb0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1d5cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d5cb4: 0x503021  addu        $a2, $v0, $s0
    ctx->pc = 0x1d5cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d5cb8: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x1d5cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1d5cbc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d5cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d5cc0: 0xc4400080  lwc1        $f0, 0x80($v0)
    ctx->pc = 0x1d5cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5cc4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d5cc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d5cc8: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x1d5cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x1d5ccc: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x1d5cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1d5cd0: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x1d5cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d5cd4: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x1d5cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5cd8: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x1d5cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d5cdc: 0x846209aa  lh          $v0, 0x9AA($v1)
    ctx->pc = 0x1d5cdcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2474)));
    // 0x1d5ce0: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x1d5ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d5ce4: 0xa46609aa  sh          $a2, 0x9AA($v1)
    ctx->pc = 0x1d5ce4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2474), (uint16_t)GPR_U32(ctx, 6));
    // 0x1d5ce8: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x1d5ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1d5cec: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1d5cecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d5cf0: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x1d5cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5cf4: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1d5cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d5cf8: 0x84c209aa  lh          $v0, 0x9AA($a2)
    ctx->pc = 0x1d5cf8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2474)));
    // 0x1d5cfc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d5cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d5d00: 0xa4c209aa  sh          $v0, 0x9AA($a2)
    ctx->pc = 0x1d5d00u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2474), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d5d04: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1d5d04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d5d08: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x1d5d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d5d0c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d5d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d5d10: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d5d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d5d14: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x1d5d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1d5d18: 0x24628700  addiu       $v0, $v1, -0x7900
    ctx->pc = 0x1d5d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936320));
    // 0x1d5d1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d5d1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5d20: 0x0  nop
    ctx->pc = 0x1d5d20u;
    // NOP
    // 0x1d5d24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d5d24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d5d28: 0xe7a00194  swc1        $f0, 0x194($sp)
    ctx->pc = 0x1d5d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
    // 0x1d5d2c: 0x3c024560  lui         $v0, 0x4560
    ctx->pc = 0x1d5d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17760 << 16));
    // 0x1d5d30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d5d30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d5d34: 0xc7a00194  lwc1        $f0, 0x194($sp)
    ctx->pc = 0x1d5d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5d38: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x1d5d38u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1d5d3c: 0x0  nop
    ctx->pc = 0x1d5d3cu;
    // NOP
    // 0x1d5d40: 0x0  nop
    ctx->pc = 0x1d5d40u;
    // NOP
    // 0x1d5d44: 0x0  nop
    ctx->pc = 0x1d5d44u;
    // NOP
    // 0x1d5d48: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x1D5D48u;
    SET_GPR_U32(ctx, 31, 0x1D5D50u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x1D5D48u, 0x1D5D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5D50u;
label_1d5d50:
    // 0x1d5d50: 0x3c033fec  lui         $v1, 0x3FEC
    ctx->pc = 0x1d5d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16364 << 16));
    // 0x1d5d54: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d5d54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d5d58: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1d5d58u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d5d5c: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x1D5D5Cu;
    SET_GPR_U32(ctx, 31, 0x1D5D64u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x1D5D5Cu, 0x1D5D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5D64u;
label_1d5d64:
    // 0x1d5d64: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1d5d64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d5d68: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x1D5D68u;
    SET_GPR_U32(ctx, 31, 0x1D5D70u);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x1D5D68u, 0x1D5D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5D70u;
label_1d5d70:
    // 0x1d5d70: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1d5d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d5d74: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x1d5d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d5d78: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1d5d78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1d5d7c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1d5d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d5d80: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x1d5d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x1d5d84: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1d5d84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d5d88: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x1d5d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d5d8c: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x1d5d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1d5d90: 0x2251821  addu        $v1, $s1, $a1
    ctx->pc = 0x1d5d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1d5d94: 0xc4610084  lwc1        $f1, 0x84($v1)
    ctx->pc = 0x1d5d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d5d98: 0xc7a00198  lwc1        $f0, 0x198($sp)
    ctx->pc = 0x1d5d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5d9c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d5d9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d5da0: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x1d5da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x1d5da4: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x1d5da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1d5da8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1d5da8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d5dac: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x1d5dacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5db0: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x1d5db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1d5db4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1d5db4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1d5db8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d5db8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d5dbc: 0xc4c009dc  lwc1        $f0, 0x9DC($a2)
    ctx->pc = 0x1d5dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 2524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5dc0: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1d5dc0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1d5dc4: 0xc7a0019c  lwc1        $f0, 0x19C($sp)
    ctx->pc = 0x1d5dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5dc8: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1d5dc8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d5dcc: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x1d5dccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d5dd0: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x1d5dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1d5dd4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1d5dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d5dd8: 0x2242821  addu        $a1, $s1, $a0
    ctx->pc = 0x1d5dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1d5ddc: 0xc4a00084  lwc1        $f0, 0x84($a1)
    ctx->pc = 0x1d5ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5de0: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x1d5de0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1d5de4: 0x3c064200  lui         $a2, 0x4200
    ctx->pc = 0x1d5de4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16896 << 16));
    // 0x1d5de8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1d5de8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5dec: 0x0  nop
    ctx->pc = 0x1d5decu;
    // NOP
    // 0x1d5df0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1d5df0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1d5df4: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1d5df4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d5df8: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x1d5df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d5dfc: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1d5dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1d5e00: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x1d5e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d5e04: 0xc4800084  lwc1        $f0, 0x84($a0)
    ctx->pc = 0x1d5e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5e08: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1d5e08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1d5e0c: 0xe4800084  swc1        $f0, 0x84($a0)
    ctx->pc = 0x1d5e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
    // 0x1d5e10: 0x102840  sll         $a1, $s0, 1
    ctx->pc = 0x1d5e10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d5e14: 0xb03021  addu        $a2, $a1, $s0
    ctx->pc = 0x1d5e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1d5e18: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x1d5e18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1d5e1c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1d5e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d5e20: 0xac6000ac  sw          $zero, 0xAC($v1)
    ctx->pc = 0x1d5e20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 172), GPR_U32(ctx, 0));
    // 0x1d5e24: 0x1323bc  dsll32      $a0, $s3, 14
    ctx->pc = 0x1d5e24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 14));
    // 0x1d5e28: 0x423be  dsrl32      $a0, $a0, 14
    ctx->pc = 0x1d5e28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 14));
    // 0x1d5e2c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D5E2Cu;
    {
        const bool branch_taken_0x1d5e2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5e2c) {
            ctx->pc = 0x1D5E50u;
            return;
        }
    }
    ctx->pc = 0x1D5E34u;
    // 0x1d5e34: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1d5e34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d5e38: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1d5e38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d5e3c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d5e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d5e40: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1d5e40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d5e44: 0x2241821  addu        $v1, $s1, $a0
    ctx->pc = 0x1d5e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1d5e48: 0xac6500ac  sw          $a1, 0xAC($v1)
    ctx->pc = 0x1d5e48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 172), GPR_U32(ctx, 5));
    // 0x1d5e4c: 0x0  nop
    ctx->pc = 0x1d5e4cu;
    // NOP
    ctx->pc = 0x1d5e50u;
}
