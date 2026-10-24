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

// Function: entry_001921dc
// Address: 0x1921dc - 0x1922c8
void entry_001921dc_0x1921dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001921dc_0x1921dc");
#endif

    switch (ctx->pc) {
        case 0x192200u: goto label_192200;
        case 0x1922acu: goto label_1922ac;
        default: break;
    }

    ctx->pc = 0x1921dcu;

    // 0x1921dc: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x1921dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1921e0: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x1921e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1921e4: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1921e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1921e8: 0xc7a1010c  lwc1        $f1, 0x10C($sp)
    ctx->pc = 0x1921e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1921ec: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x1921ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1921f0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1921f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1921f4: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x1921f4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1921f8: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x1921F8u;
    SET_GPR_U32(ctx, 31, 0x192200u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x1921F8u, 0x192200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192200u;
label_192200:
    // 0x192200: 0x92c20345  lbu         $v0, 0x345($s6)
    ctx->pc = 0x192200u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 837)));
    // 0x192204: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x192204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x192208: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x192208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x19220c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19220cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192210: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x192210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x192214: 0xc7a2010c  lwc1        $f2, 0x10C($sp)
    ctx->pc = 0x192214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x192218: 0xc4410ac8  lwc1        $f1, 0xAC8($v0)
    ctx->pc = 0x192218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19221c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x19221cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x192220: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x192220u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x192224: 0xc6e101b4  lwc1        $f1, 0x1B4($s7)
    ctx->pc = 0x192224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192228: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x192228u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x19222c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x19222cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x192230: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x192230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x192234: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x192234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192238: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x192238u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x19223c: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x19223cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x192240: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x192240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x192244: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x192244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192248: 0x0  nop
    ctx->pc = 0x192248u;
    // NOP
    // 0x19224c: 0x46020d02  mul.s       $f20, $f1, $f2
    ctx->pc = 0x19224cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x192250: 0x92c20345  lbu         $v0, 0x345($s6)
    ctx->pc = 0x192250u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 837)));
    // 0x192254: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x192254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x192258: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x192258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x19225c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19225cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192260: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x192260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x192264: 0xc7a20108  lwc1        $f2, 0x108($sp)
    ctx->pc = 0x192264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x192268: 0xc4410ac8  lwc1        $f1, 0xAC8($v0)
    ctx->pc = 0x192268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19226c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x19226cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x192270: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x192270u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x192274: 0xc6e001b4  lwc1        $f0, 0x1B4($s7)
    ctx->pc = 0x192274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192278: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x192278u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x19227c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x19227cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x192280: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x192280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x192284: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x192284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192288: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x192288u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x19228c: 0x3c023eee  lui         $v0, 0x3EEE
    ctx->pc = 0x19228cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16110 << 16));
    // 0x192290: 0x3442eeef  ori         $v0, $v0, 0xEEEF
    ctx->pc = 0x192290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61167);
    // 0x192294: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192298: 0x0  nop
    ctx->pc = 0x192298u;
    // NOP
    // 0x19229c: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x19229cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1922a0: 0xc7ac00fc  lwc1        $f12, 0xFC($sp)
    ctx->pc = 0x1922a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1922a4: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x1922A4u;
    SET_GPR_U32(ctx, 31, 0x1922ACu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x1922A4u, 0x1922ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1922ACu;
label_1922ac:
    // 0x1922ac: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x1922acu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1922b0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1922b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1922b4: 0x3c2102b  sltu        $v0, $fp, $v0
    ctx->pc = 0x1922b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1922b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1922B8u;
    {
        const bool branch_taken_0x1922b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1922b8) {
            ctx->pc = 0x1922C8u;
            return;
        }
    }
    ctx->pc = 0x1922C0u;
    // 0x1922c0: 0x341effff  ori         $fp, $zero, 0xFFFF
    ctx->pc = 0x1922c0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1922c4: 0x0  nop
    ctx->pc = 0x1922c4u;
    // NOP
    ctx->pc = 0x1922c8u;
}
