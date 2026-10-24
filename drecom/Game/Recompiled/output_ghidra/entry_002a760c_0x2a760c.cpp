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

// Function: entry_002a760c
// Address: 0x2a760c - 0x2a76d4
void entry_002a760c_0x2a760c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a760c_0x2a760c");
#endif

    switch (ctx->pc) {
        case 0x2a7648u: goto label_2a7648;
        case 0x2a7664u: goto label_2a7664;
        case 0x2a767cu: goto label_2a767c;
        case 0x2a76b4u: goto label_2a76b4;
        default: break;
    }

    ctx->pc = 0x2a760cu;

    // 0x2a760c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2a760cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a7610: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2a7610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7614: 0xa0a410a8  sb          $a0, 0x10A8($a1)
    ctx->pc = 0x2a7614u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a7618: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a7618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a761c: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x2a761cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7620: 0x3c033e8e  lui         $v1, 0x3E8E
    ctx->pc = 0x2a7620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16014 << 16));
    // 0x2a7624: 0x3465fa35  ori         $a1, $v1, 0xFA35
    ctx->pc = 0x2a7624u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x2a7628: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x2a7628u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a762c: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x2a762cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2a7630: 0xc4cc00d4  lwc1        $f12, 0xD4($a2)
    ctx->pc = 0x2a7630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a7634: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2a7634u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x2a7638: 0x24a6dce0  addiu       $a2, $a1, -0x2320
    ctx->pc = 0x2a7638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958304));
    // 0x2a763c: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2a763cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a7640: 0xc05c848  jal         func_172120
    ctx->pc = 0x2A7640u;
    SET_GPR_U32(ctx, 31, 0x2A7648u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A7640u, 0x2A7648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7648u;
label_2a7648:
    // 0x2a7648: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2a7648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2a764c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a764cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7650: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2a7650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7654: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x2a7654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7658: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a7658u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a765c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A765Cu;
    SET_GPR_U32(ctx, 31, 0x2A7664u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A765Cu, 0x2A7664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7664u;
label_2a7664:
    // 0x2a7664: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7668: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x2a7668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    // 0x2a766c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a766cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7670: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a7670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a7674: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A7674u;
    SET_GPR_U32(ctx, 31, 0x2A767Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A7674u, 0x2A767Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A767Cu;
label_2a767c:
    // 0x2a767c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a767cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7680: 0x908209db  lbu         $v0, 0x9DB($a0)
    ctx->pc = 0x2a7680u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2523)));
    // 0x2a7684: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2a7684u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a7688: 0x30a30080  andi        $v1, $a1, 0x80
    ctx->pc = 0x2a7688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x2a768c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A768Cu;
    {
        const bool branch_taken_0x2a768c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a768c) {
            ctx->pc = 0x2A76D4u;
            return;
        }
    }
    ctx->pc = 0x2A7694u;
    // 0x2a7694: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7698: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2a7698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a769c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a769cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a76a0: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a76a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a76a4: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x2a76a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x2a76a8: 0x24660180  addiu       $a2, $v1, 0x180
    ctx->pc = 0x2a76a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x2a76ac: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2A76ACu;
    SET_GPR_U32(ctx, 31, 0x2A76B4u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2A76ACu, 0x2A76B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A76B4u;
label_2a76b4:
    // 0x2a76b4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a76b4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a76b8: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a76b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a76bc: 0xc4810184  lwc1        $f1, 0x184($a0)
    ctx->pc = 0x2a76bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a76c0: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x2a76c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x2a76c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a76c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a76c8: 0x0  nop
    ctx->pc = 0x2a76c8u;
    // NOP
    // 0x2a76cc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a76ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a76d0: 0xe4800184  swc1        $f0, 0x184($a0)
    ctx->pc = 0x2a76d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 388), bits); }
    ctx->pc = 0x2a76d4u;
}
