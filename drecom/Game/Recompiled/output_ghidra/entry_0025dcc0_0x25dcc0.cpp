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

// Function: entry_0025dcc0
// Address: 0x25dcc0 - 0x25dd5c
void entry_0025dcc0_0x25dcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025dcc0_0x25dcc0");
#endif

    switch (ctx->pc) {
        case 0x25dd54u: goto label_25dd54;
        default: break;
    }

    ctx->pc = 0x25dcc0u;

    // 0x25dcc0: 0x8fa30228  lw          $v1, 0x228($sp)
    ctx->pc = 0x25dcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x25dcc4: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x25dcc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x25dcc8: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x25DCC8u;
    {
        const bool branch_taken_0x25dcc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dcc8) {
            ctx->pc = 0x25DE80u;
            return;
        }
    }
    ctx->pc = 0x25DCD0u;
    // 0x25dcd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25dcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25dcd4: 0x2821804  sllv        $v1, $v0, $s4
    ctx->pc = 0x25dcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x25dcd8: 0x3c023007  lui         $v0, 0x3007
    ctx->pc = 0x25dcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12295 << 16));
    // 0x25dcdc: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x25dcdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x25dce0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x25dce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x25dce4: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x25DCE4u;
    {
        const bool branch_taken_0x25dce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dce4) {
            ctx->pc = 0x25DE80u;
            return;
        }
    }
    ctx->pc = 0x25DCECu;
    // 0x25dcec: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x25dcecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x25dcf0: 0x2442b890  addiu       $v0, $v0, -0x4770
    ctx->pc = 0x25dcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949008));
    // 0x25dcf4: 0x27a40208  addiu       $a0, $sp, 0x208
    ctx->pc = 0x25dcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
    // 0x25dcf8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x25dcf8u;
    { uint32_t bits = FAST_READ32(0x38B890u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25dcfc: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x25dcfcu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x38B894u));
    // 0x25dd00: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x25dd00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x25dd04: 0xa4820004  sh          $v0, 0x4($a0)
    ctx->pc = 0x25dd04u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x25dd08: 0x12e0001c  beqz        $s7, . + 4 + (0x1C << 2)
    ctx->pc = 0x25DD08u;
    {
        const bool branch_taken_0x25dd08 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dd08) {
            ctx->pc = 0x25DD7Cu;
            return;
        }
    }
    ctx->pc = 0x25DD10u;
    // 0x25dd10: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x25dd10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25dd14: 0x2042821  addu        $a1, $s0, $a0
    ctx->pc = 0x25dd14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x25dd18: 0x8ca21924  lw          $v0, 0x1924($a1)
    ctx->pc = 0x25dd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 6436)));
    // 0x25dd1c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x25DD1Cu;
    {
        const bool branch_taken_0x25dd1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dd1c) {
            ctx->pc = 0x25DD5Cu;
            return;
        }
    }
    ctx->pc = 0x25DD24u;
    // 0x25dd24: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x25dd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25dd28: 0xa7a4013a  sh          $a0, 0x13A($sp)
    ctx->pc = 0x25dd28u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 314), (uint16_t)GPR_U32(ctx, 4));
    // 0x25dd2c: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x25dd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25dd30: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x25dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x25dd34: 0x8c441924  lw          $a0, 0x1924($v0)
    ctx->pc = 0x25dd34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6436)));
    // 0x25dd38: 0xafa4013c  sw          $a0, 0x13C($sp)
    ctx->pc = 0x25dd38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 4));
    // 0x25dd3c: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x25dd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x25dd40: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x25dd40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25dd44: 0x27a501f8  addiu       $a1, $sp, 0x1F8
    ctx->pc = 0x25dd44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 504));
    // 0x25dd48: 0x27a60208  addiu       $a2, $sp, 0x208
    ctx->pc = 0x25dd48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
    // 0x25dd4c: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x25DD4Cu;
    SET_GPR_U32(ctx, 31, 0x25DD54u);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x25DD4Cu, 0x25DD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DD54u;
label_25dd54:
    // 0x25dd54: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x25DD54u;
    {
        const bool branch_taken_0x25dd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dd54) {
            ctx->pc = 0x25DDE0u;
            return;
        }
    }
    ctx->pc = 0x25DD5Cu;
}
