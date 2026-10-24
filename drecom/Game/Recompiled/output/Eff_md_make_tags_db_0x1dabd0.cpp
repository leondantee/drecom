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

// Function: Eff_md_make_tags_db
// Address: 0x1dabd0 - 0x1db670
void Eff_md_make_tags_db_0x1dabd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Eff_md_make_tags_db_0x1dabd0");
#endif

    switch (ctx->pc) {
        case 0x1dac44u: goto label_1dac44;
        case 0x1dac8cu: goto label_1dac8c;
        case 0x1dacd0u: goto label_1dacd0;
        case 0x1daf50u: goto label_1daf50;
        case 0x1db0b8u: goto label_1db0b8;
        default: break;
    }

    ctx->pc = 0x1dabd0u;

    // 0x1dabd0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1dabd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x1dabd4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x1dabd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x1dabd8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1dabd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1dabdc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1dabdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1dabe0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1dabe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1dabe4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1dabe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1dabe8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1dabe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1dabec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1dabecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1dabf0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dabf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dabf4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dabf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dabf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dabf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1dabfc: 0xafa400e8  sw          $a0, 0xE8($sp)
    ctx->pc = 0x1dabfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 4));
    // 0x1dac00: 0xafa500f0  sw          $a1, 0xF0($sp)
    ctx->pc = 0x1dac00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 5));
    // 0x1dac04: 0xafa600f8  sw          $a2, 0xF8($sp)
    ctx->pc = 0x1dac04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 6));
    // 0x1dac08: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1dac08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1dac0c: 0x3044000f  andi        $a0, $v0, 0xF
    ctx->pc = 0x1dac0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1dac10: 0xafa400c8  sw          $a0, 0xC8($sp)
    ctx->pc = 0x1dac10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 4));
    // 0x1dac14: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1dac14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1dac18: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DAC18u;
    {
        const bool branch_taken_0x1dac18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dac18) {
            ctx->pc = 0x1DAC38u;
            goto label_1dac38;
        }
    }
    ctx->pc = 0x1DAC20u;
    // 0x1dac20: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1dac20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1dac24: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1dac24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1dac28: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1dac28u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dac2c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1dac2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1dac30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dac30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dac34: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x1dac34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
label_1dac38:
    // 0x1dac38: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x1dac38u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dac3c: 0x1000027a  b           . + 4 + (0x27A << 2)
    ctx->pc = 0x1DAC3Cu;
    {
        const bool branch_taken_0x1dac3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dac3c) {
            ctx->pc = 0x1DB628u;
            goto label_1db628;
        }
    }
    ctx->pc = 0x1DAC44u;
label_1dac44:
    // 0x1dac44: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1dac44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1dac48: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x1dac48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1dac4c: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x1dac4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x1dac50: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x1dac50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x1dac54: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DAC54u;
    {
        const bool branch_taken_0x1dac54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dac54) {
            ctx->pc = 0x1DAC78u;
            goto label_1dac78;
        }
    }
    ctx->pc = 0x1DAC5Cu;
    // 0x1dac5c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1dac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1dac60: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x1dac60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x1dac64: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x1dac64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dac68: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1dac68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1dac6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dac6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dac70: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x1dac70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x1dac74: 0x0  nop
    ctx->pc = 0x1dac74u;
    // NOP
label_1dac78:
    // 0x1dac78: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1dac78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1dac7c: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x1dac7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1dac80: 0x72803628  paddub      $a2, $s4, $zero
    ctx->pc = 0x1dac80u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1dac84: 0xc076824  jal         func_1DA090
    ctx->pc = 0x1DAC84u;
    SET_GPR_U32(ctx, 31, 0x1DAC8Cu);
    ctx->pc = 0x1DA090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA090u, 0x1DAC84u, 0x1DAC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAC8Cu;
label_1dac8c:
    // 0x1dac8c: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x1dac8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x1dac90: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1dac90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1dac94: 0xafa300c4  sw          $v1, 0xC4($sp)
    ctx->pc = 0x1dac94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
    // 0x1dac98: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x1dac98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1dac9c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1dac9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1daca0: 0xafa300b4  sw          $v1, 0xB4($sp)
    ctx->pc = 0x1daca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 3));
    // 0x1daca4: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1daca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1daca8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1daca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1dacac: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x1dacacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    // 0x1dacb0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1dacb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1dacb4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1dacb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dacb8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1dacb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dacbc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1dacbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dacc0: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x1dacc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1dacc4: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x1dacc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1dacc8: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x1dacc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x1daccc: 0x0  nop
    ctx->pc = 0x1dacccu;
    // NOP
label_1dacd0:
    // 0x1dacd0: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1dacd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1dacd4: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x1dacd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
    // 0x1dacd8: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1dacd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1dacdc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1dacdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dace0: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x1dace0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1dace4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dace4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dace8: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x1dace8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
    // 0x1dacec: 0x8fa600b4  lw          $a2, 0xB4($sp)
    ctx->pc = 0x1dacecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1dacf0: 0xacc40020  sw          $a0, 0x20($a2)
    ctx->pc = 0x1dacf0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 4));
    // 0x1dacf4: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x1dacf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1dacf8: 0x24a200c0  addiu       $v0, $a1, 0xC0
    ctx->pc = 0x1dacf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    // 0x1dacfc: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x1dacfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x1dad00: 0x328400ff  andi        $a0, $s4, 0xFF
    ctx->pc = 0x1dad00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1dad04: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1dad04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1dad08: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x1dad08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1dad0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dad0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dad10: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1dad10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1dad14: 0x2293c  dsll32      $a1, $v0, 4
    ctx->pc = 0x1dad14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1dad18: 0x5293e  dsrl32      $a1, $a1, 4
    ctx->pc = 0x1dad18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 4));
    // 0x1dad1c: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x1dad1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1dad20: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1dad20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1dad24: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x1dad24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1dad28: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1dad28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x1dad2c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1dad2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1dad30: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1dad30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1dad34: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1dad34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1dad38: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1dad38u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1dad3c: 0x3c021100  lui         $v0, 0x1100
    ctx->pc = 0x1dad3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4352 << 16));
    // 0x1dad40: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x1dad40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1dad44: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x1dad44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x1dad48: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x1dad48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x1dad4c: 0x34640004  ori         $a0, $v1, 0x4
    ctx->pc = 0x1dad4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x1dad50: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1dad50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1dad54: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x1dad54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x1dad58: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x1dad58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1dad5c: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1dad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1dad60: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x1dad60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1dad64: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x1dad64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x1dad68: 0x2883c  dsll32      $s1, $v0, 0
    ctx->pc = 0x1dad68u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dad6c: 0x11883e  dsrl32      $s1, $s1, 0
    ctx->pc = 0x1dad6cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 0));
    // 0x1dad70: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x1dad70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1dad74: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x1dad74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x1dad78: 0x34850002  ori         $a1, $a0, 0x2
    ctx->pc = 0x1dad78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x1dad7c: 0x451825  or          $v1, $v0, $a1
    ctx->pc = 0x1dad7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1dad80: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1dad80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1dad84: 0xfc430010  sd          $v1, 0x10($v0)
    ctx->pc = 0x1dad84u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 3));
    // 0x1dad88: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1dad88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1dad8c: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1dad8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1dad90: 0x3c026c02  lui         $v0, 0x6C02
    ctx->pc = 0x1dad90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27650 << 16));
    // 0x1dad94: 0x344203fe  ori         $v0, $v0, 0x3FE
    ctx->pc = 0x1dad94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1022);
    // 0x1dad98: 0x8fb100d0  lw          $s1, 0xD0($sp)
    ctx->pc = 0x1dad98u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1dad9c: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x1dad9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x1dada0: 0x8fb100ac  lw          $s1, 0xAC($sp)
    ctx->pc = 0x1dada0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1dada4: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x1dada4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x1dada8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1dada8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dadac: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1dadacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1dadb0: 0x16220013  bne         $s1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DADB0u;
    {
        const bool branch_taken_0x1dadb0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dadb0) {
            ctx->pc = 0x1DAE00u;
            goto label_1dae00;
        }
    }
    ctx->pc = 0x1DADB8u;
    // 0x1dadb8: 0x3c110048  lui         $s1, 0x48
    ctx->pc = 0x1dadb8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)72 << 16));
    // 0x1dadbc: 0x2622bd20  addiu       $v0, $s1, -0x42E0
    ctx->pc = 0x1dadbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950176));
    // 0x1dadc0: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x1dadc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1dadc4: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x1dadc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x1dadc8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1dadc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dadcc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1dadccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1dadd0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1dadd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dadd4: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1dadd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x1dadd8: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x1dadd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x1daddc: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1daddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1dade0: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1dade0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1dade4: 0xfc620020  sd          $v0, 0x20($v1)
    ctx->pc = 0x1dade4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 2));
    // 0x1dade8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1dade8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1dadec: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x1dadecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x1dadf0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1dadf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1dadf4: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x1dadf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x1dadf8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1DADF8u;
    {
        const bool branch_taken_0x1dadf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dadf8) {
            ctx->pc = 0x1DAE20u;
            goto label_1dae20;
        }
    }
    ctx->pc = 0x1DAE00u;
label_1dae00:
    // 0x1dae00: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1dae00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1dae04: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1dae04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1dae08: 0xfc430020  sd          $v1, 0x20($v0)
    ctx->pc = 0x1dae08u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 3));
    // 0x1dae0c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1dae0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1dae10: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x1dae10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x1dae14: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1dae14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1dae18: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x1dae18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x1dae1c: 0x0  nop
    ctx->pc = 0x1dae1cu;
    // NOP
label_1dae20:
    // 0x1dae20: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1dae20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1dae24: 0x2193c  dsll32      $v1, $v0, 4
    ctx->pc = 0x1dae24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1dae28: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x1dae28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x1dae2c: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x1dae2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1dae30: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1dae30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1dae34: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1dae34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dae38: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1dae38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1dae3c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1dae3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1dae40: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x1dae40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1dae44: 0xfca20030  sd          $v0, 0x30($a1)
    ctx->pc = 0x1dae44u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 48), GPR_U64(ctx, 2));
    // 0x1dae48: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1dae48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1dae4c: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x1dae4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x1dae50: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1dae50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1dae54: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x1dae54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x1dae58: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1dae58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1dae5c: 0xafa400bc  sw          $a0, 0xBC($sp)
    ctx->pc = 0x1dae5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 4));
    // 0x1dae60: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1dae60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1dae64: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1dae64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dae68: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x1dae68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1dae6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dae70: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x1dae70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x1dae74: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x1dae74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1dae78: 0xac440084  sw          $a0, 0x84($v0)
    ctx->pc = 0x1dae78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 4));
    // 0x1dae7c: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1dae7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1dae80: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x1dae80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1dae84: 0xafa300f8  sw          $v1, 0xF8($sp)
    ctx->pc = 0x1dae84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 3));
    // 0x1dae88: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1dae88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1dae8c: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1dae8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1dae90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1dae90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dae94: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1dae94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dae98: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1dae98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1dae9c: 0x2482b7a0  addiu       $v0, $a0, -0x4860
    ctx->pc = 0x1dae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948768));
    // 0x1daea0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1daea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1daea4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1daea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1daea8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1daea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1daeac: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1daeacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1daeb0: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1daeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x1daeb4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1daeb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1daeb8: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x1daeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1daebc: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x1daebcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1daec0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1daec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1daec4: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x1daec4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1daec8: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1daec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1daecc: 0x2463b7a0  addiu       $v1, $v1, -0x4860
    ctx->pc = 0x1daeccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948768));
    // 0x1daed0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1daed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1daed4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1daed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1daed8: 0x3293c  dsll32      $a1, $v1, 4
    ctx->pc = 0x1daed8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 4));
    // 0x1daedc: 0x5293e  dsrl32      $a1, $a1, 4
    ctx->pc = 0x1daedcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 4));
    // 0x1daee0: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x1daee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1daee4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1daee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1daee8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1daee8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1daeec: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x1daeecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1daef0: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1daef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1daef4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1daef4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1daef8: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1daef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1daefc: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x1daefcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x1daf00: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1daf00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1daf04: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1daf04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1daf08: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1daf08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1daf0c: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x1daf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x1daf10: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x1daf10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1daf14: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1daf14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1daf18: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1daf18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1daf1c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1daf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1daf20: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1daf20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1daf24: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1daf24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1daf28: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x1daf28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x1daf2c: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x1daf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1daf30: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1daf30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1daf34: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x1daf34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x1daf38: 0x8fa400b4  lw          $a0, 0xB4($sp)
    ctx->pc = 0x1daf38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1daf3c: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x1daf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1daf40: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x1daf40u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1daf44: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1daf44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1daf48: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x1daf48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1daf4c: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x1daf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
label_1daf50:
    // 0x1daf50: 0x8fb500f8  lw          $s5, 0xF8($sp)
    ctx->pc = 0x1daf50u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1daf54: 0x26a20040  addiu       $v0, $s5, 0x40
    ctx->pc = 0x1daf54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x1daf58: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x1daf58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x1daf5c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1daf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1daf60: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x1daf60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1daf64: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x1daf64u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x1daf68: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1daf68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1daf6c: 0xaea20008  sw          $v0, 0x8($s5)
    ctx->pc = 0x1daf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
    // 0x1daf70: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1daf70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1daf74: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x1daf74u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
    // 0x1daf78: 0xaea00018  sw          $zero, 0x18($s5)
    ctx->pc = 0x1daf78u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 0));
    // 0x1daf7c: 0xaea00014  sw          $zero, 0x14($s5)
    ctx->pc = 0x1daf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 0));
    // 0x1daf80: 0xaea00010  sw          $zero, 0x10($s5)
    ctx->pc = 0x1daf80u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 0));
    // 0x1daf84: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1daf84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x1daf88: 0xaea2001c  sw          $v0, 0x1C($s5)
    ctx->pc = 0x1daf88u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 2));
    // 0x1daf8c: 0xaea0002c  sw          $zero, 0x2C($s5)
    ctx->pc = 0x1daf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 0));
    // 0x1daf90: 0xaea00028  sw          $zero, 0x28($s5)
    ctx->pc = 0x1daf90u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 0));
    // 0x1daf94: 0xaea00024  sw          $zero, 0x24($s5)
    ctx->pc = 0x1daf94u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 0));
    // 0x1daf98: 0xaea00020  sw          $zero, 0x20($s5)
    ctx->pc = 0x1daf98u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 0));
    // 0x1daf9c: 0x26a30020  addiu       $v1, $s5, 0x20
    ctx->pc = 0x1daf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x1dafa0: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1dafa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1dafa4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1dafa4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dafa8: 0x2641021  addu        $v0, $s3, $a0
    ctx->pc = 0x1dafa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x1dafac: 0xac430058  sw          $v1, 0x58($v0)
    ctx->pc = 0x1dafacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 3));
    // 0x1dafb0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1dafb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1dafb4: 0x3113c  dsll32      $v0, $v1, 4
    ctx->pc = 0x1dafb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 4));
    // 0x1dafb8: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x1dafb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x1dafbc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1dafbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dafc0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1dafc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1dafc4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1dafc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dafc8: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1dafc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x1dafcc: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1dafccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1dafd0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1dafd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1dafd4: 0xfea30030  sd          $v1, 0x30($s5)
    ctx->pc = 0x1dafd4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 48), GPR_U64(ctx, 3));
    // 0x1dafd8: 0x3c021100  lui         $v0, 0x1100
    ctx->pc = 0x1dafd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4352 << 16));
    // 0x1dafdc: 0xaea20038  sw          $v0, 0x38($s5)
    ctx->pc = 0x1dafdcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 2));
    // 0x1dafe0: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x1dafe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x1dafe4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1dafe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1dafe8: 0xaea2003c  sw          $v0, 0x3C($s5)
    ctx->pc = 0x1dafe8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 60), GPR_U32(ctx, 2));
    // 0x1dafec: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1dafecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1daff0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1daff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1daff4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1daff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1daff8: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x1daff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1daffc: 0xafa300dc  sw          $v1, 0xDC($sp)
    ctx->pc = 0x1daffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
    // 0x1db000: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1db000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1db004: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1db004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1db008: 0x2631021  addu        $v0, $s3, $v1
    ctx->pc = 0x1db008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1db00c: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1db00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1db010: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x1db010u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1db014: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1db014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1db018: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1db018u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1db01c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1db01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1db020: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x1db020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1db024: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x1db024u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1db028: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1db028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1db02c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1db02cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1db030: 0x262f021  addu        $fp, $s3, $v0
    ctx->pc = 0x1db030u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1db034: 0x8fc20040  lw          $v0, 0x40($fp)
    ctx->pc = 0x1db034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 64)));
    // 0x1db038: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x1db038u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1db03c: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1db03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1db040: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1db040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1db044: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1db044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1db048: 0x8c520048  lw          $s2, 0x48($v0)
    ctx->pc = 0x1db048u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1db04c: 0xafb200d8  sw          $s2, 0xD8($sp)
    ctx->pc = 0x1db04cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 18));
    // 0x1db050: 0x329000ff  andi        $s0, $s4, 0xFF
    ctx->pc = 0x1db050u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1db054: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1db054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1db058: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1db058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1db05c: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x1db05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1db060: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x1db060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x1db064: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1db064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1db068: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1db068u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1db06c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1db06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1db070: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1db070u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1db074: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x1db074u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1db078: 0x2643002f  addiu       $v1, $s2, 0x2F
    ctx->pc = 0x1db078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 47));
    // 0x1db07c: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x1db07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1db080: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x1db080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
    // 0x1db084: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x1db084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x1db088: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x1db088u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1db08c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1db08cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1db090: 0x0  nop
    ctx->pc = 0x1db090u;
    // NOP
    // 0x1db094: 0x1010  mfhi        $v0
    ctx->pc = 0x1db094u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1db098: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1db098u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1db09c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1db09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1db0a0: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x1db0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    // 0x1db0a4: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1db0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1db0a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1db0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1db0ac: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x1db0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1db0b0: 0xac700018  sw          $s0, 0x18($v1)
    ctx->pc = 0x1db0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 16));
    // 0x1db0b4: 0xae700014  sw          $s0, 0x14($s3)
    ctx->pc = 0x1db0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 16));
label_1db0b8:
    // 0x1db0b8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1db0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1db0bc: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x1db0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x1db0c0: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1db0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x1db0c4: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1db0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1db0c8: 0x34820404  ori         $v0, $a0, 0x404
    ctx->pc = 0x1db0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
    // 0x1db0cc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1db0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1db0d0: 0x3c036c03  lui         $v1, 0x6C03
    ctx->pc = 0x1db0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27651 << 16));
    // 0x1db0d4: 0x34628000  ori         $v0, $v1, 0x8000
    ctx->pc = 0x1db0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1db0d8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1db0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1db0dc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1db0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1db0e0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1db0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db0e4: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1db0e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db0e8: 0x2a21025  or          $v0, $s5, $v0
    ctx->pc = 0x1db0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
    // 0x1db0ec: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x1db0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x1db0f0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1db0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1db0f4: 0xfe020018  sd          $v0, 0x18($s0)
    ctx->pc = 0x1db0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 2));
    // 0x1db0f8: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x1db0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x1db0fc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1db0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1db100: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DB100u;
    {
        const bool branch_taken_0x1db100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1db100) {
            ctx->pc = 0x1DB118u;
            goto label_1db118;
        }
    }
    ctx->pc = 0x1DB108u;
    // 0x1db108: 0xde620008  ld          $v0, 0x8($s3)
    ctx->pc = 0x1db108u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1db10c: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x1db10cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x1db110: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1DB110u;
    {
        const bool branch_taken_0x1db110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db110) {
            ctx->pc = 0x1DB1C0u;
            goto label_1db1c0;
        }
    }
    ctx->pc = 0x1DB118u;
label_1db118:
    // 0x1db118: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1db118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1db11c: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1db11cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1db120: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1db120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1db124: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1db124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1db128: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DB128u;
    {
        const bool branch_taken_0x1db128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db128) {
            ctx->pc = 0x1DB178u;
            goto label_1db178;
        }
    }
    ctx->pc = 0x1DB130u;
    // 0x1db130: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1db130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1db134: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DB134u;
    {
        const bool branch_taken_0x1db134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db134) {
            ctx->pc = 0x1DB158u;
            goto label_1db158;
        }
    }
    ctx->pc = 0x1DB13Cu;
    // 0x1db13c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1db13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1db140: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1db140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db144: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x1db144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x1db148: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1db148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1db14c: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x1db14cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x1db150: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1DB150u;
    {
        const bool branch_taken_0x1db150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db150) {
            ctx->pc = 0x1DB1C0u;
            goto label_1db1c0;
        }
    }
    ctx->pc = 0x1DB158u;
label_1db158:
    // 0x1db158: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1db158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1db15c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1db15cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db160: 0x3c032402  lui         $v1, 0x2402
    ctx->pc = 0x1db160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9218 << 16));
    // 0x1db164: 0x34620700  ori         $v0, $v1, 0x700
    ctx->pc = 0x1db164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1792);
    // 0x1db168: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1db168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1db16c: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x1db16cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x1db170: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1DB170u;
    {
        const bool branch_taken_0x1db170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db170) {
            ctx->pc = 0x1DB1C0u;
            goto label_1db1c0;
        }
    }
    ctx->pc = 0x1DB178u;
label_1db178:
    // 0x1db178: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x1db178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1db17c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1db17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db180: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DB180u;
    {
        const bool branch_taken_0x1db180 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1db180) {
            ctx->pc = 0x1DB1A4u;
            goto label_1db1a4;
        }
    }
    ctx->pc = 0x1DB188u;
    // 0x1db188: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1db188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1db18c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1db18cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db190: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x1db190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x1db194: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1db194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1db198: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x1db198u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x1db19c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1DB19Cu;
    {
        const bool branch_taken_0x1db19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db19c) {
            ctx->pc = 0x1DB1C0u;
            goto label_1db1c0;
        }
    }
    ctx->pc = 0x1DB1A4u;
label_1db1a4:
    // 0x1db1a4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1db1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1db1a8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1db1a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db1ac: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x1db1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x1db1b0: 0x34430700  ori         $v1, $v0, 0x700
    ctx->pc = 0x1db1b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1792);
    // 0x1db1b4: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x1db1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1db1b8: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x1db1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x1db1bc: 0x0  nop
    ctx->pc = 0x1db1bcu;
    // NOP
label_1db1c0:
    // 0x1db1c0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1db1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1db1c4: 0xfe040028  sd          $a0, 0x28($s0)
    ctx->pc = 0x1db1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 4));
    // 0x1db1c8: 0xde650000  ld          $a1, 0x0($s3)
    ctx->pc = 0x1db1c8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1db1cc: 0x513fc  dsll32      $v0, $a1, 15
    ctx->pc = 0x1db1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1db1d0: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x1db1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1db1d4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1db1d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1db1d8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1db1d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1db1dc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1db1dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1db1e0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1db1e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1db1e4: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1db1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x1db1e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1db1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db1ec: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1db1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1db1f0: 0xfe020030  sd          $v0, 0x30($s0)
    ctx->pc = 0x1db1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 2));
    // 0x1db1f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1db1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1db1f8: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x1db1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1db1fc: 0x90a30008  lbu         $v1, 0x8($a1)
    ctx->pc = 0x1db1fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1db200: 0x3044000f  andi        $a0, $v0, 0xF
    ctx->pc = 0x1db200u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1db204: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1db204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1db208: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1db208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1db20c: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x1db20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1db210: 0xa0a20008  sb          $v0, 0x8($a1)
    ctx->pc = 0x1db210u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x1db214: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1db214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db218: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x1db218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1db21c: 0x90c50008  lbu         $a1, 0x8($a2)
    ctx->pc = 0x1db21cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1db220: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1db220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1db224: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1db224u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1db228: 0x2403ff0f  addiu       $v1, $zero, -0xF1
    ctx->pc = 0x1db228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x1db22c: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x1db22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1db230: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1db230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1db234: 0xa0c20008  sb          $v0, 0x8($a2)
    ctx->pc = 0x1db234u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x1db238: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1db238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1db23c: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x1db23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1db240: 0x90a40009  lbu         $a0, 0x9($a1)
    ctx->pc = 0x1db240u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
    // 0x1db244: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x1db244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1db248: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1db248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1db24c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1db24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1db250: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1db250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1db254: 0xa0a30009  sb          $v1, 0x9($a1)
    ctx->pc = 0x1db254u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x1db258: 0x2a420030  slti        $v0, $s2, 0x30
    ctx->pc = 0x1db258u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1db25c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1DB25Cu;
    {
        const bool branch_taken_0x1db25c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db25c) {
            ctx->pc = 0x1DB294u;
            goto label_1db294;
        }
    }
    ctx->pc = 0x1DB264u;
    // 0x1db264: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1db264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1db268: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x1db268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1db26c: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x1db26cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1db270: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x1db270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1db274: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x1db274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1db278: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1db278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1db27c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1db27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1db280: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x1db280u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1db284: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1db284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1db288: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x1db288u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1db28c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1DB28Cu;
    {
        const bool branch_taken_0x1db28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db28c) {
            ctx->pc = 0x1DB2C0u;
            goto label_1db2c0;
        }
    }
    ctx->pc = 0x1DB294u;
label_1db294:
    // 0x1db294: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x1db294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x1db298: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x1db298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1db29c: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x1db29cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1db2a0: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x1db2a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1db2a4: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x1db2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1db2a8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1db2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1db2ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1db2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1db2b0: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x1db2b0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1db2b4: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1db2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1db2b8: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x1db2b8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1db2bc: 0x0  nop
    ctx->pc = 0x1db2bcu;
    // NOP
label_1db2c0:
    // 0x1db2c0: 0x26310007  addiu       $s1, $s1, 0x7
    ctx->pc = 0x1db2c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 7));
    // 0x1db2c4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1db2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1db2c8: 0x1110c3  sra         $v0, $s1, 3
    ctx->pc = 0x1db2c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 3));
    // 0x1db2cc: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1db2ccu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1db2d0: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x1db2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1db2d4: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x1db2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1db2d8: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x1db2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x1db2dc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1db2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db2e0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1db2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1db2e4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1db2e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db2e8: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1db2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1db2ec: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1db2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1db2f0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1db2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1db2f4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1db2f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db2f8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1db2f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1db2fc: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1db2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x1db300: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1db300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1db304: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x1db304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1db308: 0xfe030040  sd          $v1, 0x40($s0)
    ctx->pc = 0x1db308u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 3));
    // 0x1db30c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x1db30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x1db310: 0x34420106  ori         $v0, $v0, 0x106
    ctx->pc = 0x1db310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x1db314: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x1db314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x1db318: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x1db318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1db31c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1db31cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1db320: 0x34438004  ori         $v1, $v0, 0x8004
    ctx->pc = 0x1db320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32772);
    // 0x1db324: 0x3c026800  lui         $v0, 0x6800
    ctx->pc = 0x1db324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26624 << 16));
    // 0x1db328: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1db328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1db32c: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x1db32cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
    // 0x1db330: 0x16113c  dsll32      $v0, $s6, 4
    ctx->pc = 0x1db330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 4));
    // 0x1db334: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x1db334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x1db338: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1db338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db33c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1db33cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1db340: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1db340u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db344: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1db344u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1db348: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1db348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1db34c: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x1db34cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1db350: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x1db350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1db354: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1db354u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1db358: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x1db358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x1db35c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1db35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1db360: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x1db360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1db364: 0xfe020050  sd          $v0, 0x50($s0)
    ctx->pc = 0x1db364u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 2));
    // 0x1db368: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x1db368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x1db36c: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x1db36cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1db370: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1db370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1db374: 0x34438005  ori         $v1, $v0, 0x8005
    ctx->pc = 0x1db374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32773);
    // 0x1db378: 0x3c026800  lui         $v0, 0x6800
    ctx->pc = 0x1db378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26624 << 16));
    // 0x1db37c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1db37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1db380: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x1db380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x1db384: 0x17113c  dsll32      $v0, $s7, 4
    ctx->pc = 0x1db384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) << (32 + 4));
    // 0x1db388: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x1db388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x1db38c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1db38cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db390: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1db390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1db394: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1db394u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1db398: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1db398u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1db39c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1db39cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db3a0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1db3a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1db3a4: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1db3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x1db3a8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1db3a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1db3ac: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x1db3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1db3b0: 0xfe020060  sd          $v0, 0x60($s0)
    ctx->pc = 0x1db3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 96), GPR_U64(ctx, 2));
    // 0x1db3b4: 0x3c030500  lui         $v1, 0x500
    ctx->pc = 0x1db3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1280 << 16));
    // 0x1db3b8: 0x34620001  ori         $v0, $v1, 0x1
    ctx->pc = 0x1db3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x1db3bc: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x1db3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x1db3c0: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x1db3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1db3c4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1db3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1db3c8: 0x34648006  ori         $a0, $v1, 0x8006
    ctx->pc = 0x1db3c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32774);
    // 0x1db3cc: 0x3c036500  lui         $v1, 0x6500
    ctx->pc = 0x1db3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25856 << 16));
    // 0x1db3d0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1db3d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1db3d4: 0xae03006c  sw          $v1, 0x6C($s0)
    ctx->pc = 0x1db3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
    // 0x1db3d8: 0x1e193c  dsll32      $v1, $fp, 4
    ctx->pc = 0x1db3d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) << (32 + 4));
    // 0x1db3dc: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x1db3dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x1db3e0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1db3e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1db3e4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1db3e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1db3e8: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x1db3e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1db3ec: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x1db3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1db3f0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1db3f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1db3f4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1db3f4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1db3f8: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x1db3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x1db3fc: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x1db3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1db400: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x1db400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1db404: 0xfe020070  sd          $v0, 0x70($s0)
    ctx->pc = 0x1db404u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 2));
    // 0x1db408: 0x3c020500  lui         $v0, 0x500
    ctx->pc = 0x1db408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1280 << 16));
    // 0x1db40c: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x1db40cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x1db410: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x1db410u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1db414: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1db414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1db418: 0x34438007  ori         $v1, $v0, 0x8007
    ctx->pc = 0x1db418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32775);
    // 0x1db41c: 0x3c026e00  lui         $v0, 0x6E00
    ctx->pc = 0x1db41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28160 << 16));
    // 0x1db420: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1db420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1db424: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1db424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1db428: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x1db428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x1db42c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1db42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1db430: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x1db430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1db434: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x1db434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x1db438: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1db438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db43c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1db43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1db440: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1db440u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db444: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x1db444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1db448: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1db448u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1db44c: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x1db44cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x1db450: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1db450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1db454: 0x44a825  or          $s5, $v0, $a0
    ctx->pc = 0x1db454u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1db458: 0xfe150080  sd          $s5, 0x80($s0)
    ctx->pc = 0x1db458u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 128), GPR_U64(ctx, 21));
    // 0x1db45c: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x1db45cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x1db460: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x1db460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1db464: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1db464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1db468: 0x34438008  ori         $v1, $v0, 0x8008
    ctx->pc = 0x1db468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32776);
    // 0x1db46c: 0x3c026f00  lui         $v0, 0x6F00
    ctx->pc = 0x1db46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28416 << 16));
    // 0x1db470: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1db470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1db474: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x1db474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
    // 0x1db478: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x1db478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1db47c: 0x2193c  dsll32      $v1, $v0, 4
    ctx->pc = 0x1db47cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1db480: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x1db480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x1db484: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x1db484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1db488: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1db488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1db48c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1db48cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db490: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1db490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1db494: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1db494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db498: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1db498u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1db49c: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1db49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x1db4a0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1db4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1db4a4: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x1db4a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1db4a8: 0xfe030090  sd          $v1, 0x90($s0)
    ctx->pc = 0x1db4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 144), GPR_U64(ctx, 3));
    // 0x1db4ac: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x1db4acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x1db4b0: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x1db4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1db4b4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1db4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1db4b8: 0x34438009  ori         $v1, $v0, 0x8009
    ctx->pc = 0x1db4b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32777);
    // 0x1db4bc: 0x3c026e00  lui         $v0, 0x6E00
    ctx->pc = 0x1db4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28160 << 16));
    // 0x1db4c0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1db4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1db4c4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1db4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1db4c8: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x1db4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    // 0x1db4cc: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x1db4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1db4d0: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x1db4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1db4d4: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x1db4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x1db4d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1db4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db4dc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1db4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1db4e0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1db4e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db4e4: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1db4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1db4e8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1db4e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1db4ec: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x1db4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x1db4f0: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1db4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1db4f4: 0x3c021700  lui         $v0, 0x1700
    ctx->pc = 0x1db4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5888 << 16));
    // 0x1db4f8: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x1db4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
    // 0x1db4fc: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x1db4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x1db500: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x1db500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x1db504: 0xae0200ac  sw          $v0, 0xAC($s0)
    ctx->pc = 0x1db504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
    // 0x1db508: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x1db508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1db50c: 0x24420240  addiu       $v0, $v0, 0x240
    ctx->pc = 0x1db50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
    // 0x1db510: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x1db510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x1db514: 0x26c20240  addiu       $v0, $s6, 0x240
    ctx->pc = 0x1db514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 576));
    // 0x1db518: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x1db518u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1db51c: 0x26e200c0  addiu       $v0, $s7, 0xC0
    ctx->pc = 0x1db51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 192));
    // 0x1db520: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x1db520u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1db524: 0x27de00c0  addiu       $fp, $fp, 0xC0
    ctx->pc = 0x1db524u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 192));
    // 0x1db528: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1db528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1db52c: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1db52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1db530: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x1db530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x1db534: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x1db534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1db538: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x1db538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x1db53c: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x1db53cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x1db540: 0x2652ffd0  addiu       $s2, $s2, -0x30
    ctx->pc = 0x1db540u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967248));
    // 0x1db544: 0x261000b0  addiu       $s0, $s0, 0xB0
    ctx->pc = 0x1db544u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1db548: 0x1e40fedb  bgtz        $s2, . + 4 + (-0x125 << 2)
    ctx->pc = 0x1DB548u;
    {
        const bool branch_taken_0x1db548 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x1db548) {
            ctx->pc = 0x1DB0B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db0b8;
        }
    }
    ctx->pc = 0x1DB550u;
    // 0x1db550: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1db550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1db554: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1db554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1db558: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x1db558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x1db55c: 0x266200c0  addiu       $v0, $s3, 0xC0
    ctx->pc = 0x1db55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
    // 0x1db560: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x1db560u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1db564: 0xafb000f8  sw          $s0, 0xF8($sp)
    ctx->pc = 0x1db564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 16));
    // 0x1db568: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1db568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1db56c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1db56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1db570: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x1db570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x1db574: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1db574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1db578: 0x2452ffff  addiu       $s2, $v0, -0x1
    ctx->pc = 0x1db578u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1db57c: 0xafb200c0  sw          $s2, 0xC0($sp)
    ctx->pc = 0x1db57cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 18));
    // 0x1db580: 0x1e40fe73  bgtz        $s2, . + 4 + (-0x18D << 2)
    ctx->pc = 0x1DB580u;
    {
        const bool branch_taken_0x1db580 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x1db580) {
            ctx->pc = 0x1DAF50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1daf50;
        }
    }
    ctx->pc = 0x1DB588u;
    // 0x1db588: 0x2603fff0  addiu       $v1, $s0, -0x10
    ctx->pc = 0x1db588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x1db58c: 0x3213c  dsll32      $a0, $v1, 4
    ctx->pc = 0x1db58cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 4));
    // 0x1db590: 0x4213e  dsrl32      $a0, $a0, 4
    ctx->pc = 0x1db590u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 4));
    // 0x1db594: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1db594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1db598: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1db598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1db59c: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x1db59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1db5a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1db5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1db5a4: 0xac440018  sw          $a0, 0x18($v0)
    ctx->pc = 0x1db5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 4));
    // 0x1db5a8: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x1db5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1db5ac: 0xac440080  sw          $a0, 0x80($v0)
    ctx->pc = 0x1db5acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 4));
    // 0x1db5b0: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x1db5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1db5b4: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x1db5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x1db5b8: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x1db5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x1db5bc: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1db5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1db5c0: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x1db5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1db5c4: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x1db5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    // 0x1db5c8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1db5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1db5cc: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1db5ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1db5d0: 0x1440fdbf  bnez        $v0, . + 4 + (-0x241 << 2)
    ctx->pc = 0x1DB5D0u;
    {
        const bool branch_taken_0x1db5d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db5d0) {
            ctx->pc = 0x1DACD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dacd0;
        }
    }
    ctx->pc = 0x1DB5D8u;
    // 0x1db5d8: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1db5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1db5dc: 0x2213c  dsll32      $a0, $v0, 4
    ctx->pc = 0x1db5dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1db5e0: 0x4213e  dsrl32      $a0, $a0, 4
    ctx->pc = 0x1db5e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 4));
    // 0x1db5e4: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1db5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1db5e8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1db5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1db5ec: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x1db5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1db5f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1db5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1db5f4: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x1db5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
    // 0x1db5f8: 0x8fb500f8  lw          $s5, 0xF8($sp)
    ctx->pc = 0x1db5f8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1db5fc: 0x26a20040  addiu       $v0, $s5, 0x40
    ctx->pc = 0x1db5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x1db600: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x1db600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x1db604: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1db604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1db608: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x1db608u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x1db60c: 0x3c031100  lui         $v1, 0x1100
    ctx->pc = 0x1db60cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4352 << 16));
    // 0x1db610: 0xaea30008  sw          $v1, 0x8($s5)
    ctx->pc = 0x1db610u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 3));
    // 0x1db614: 0xaea0000c  sw          $zero, 0xC($s5)
    ctx->pc = 0x1db614u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 0));
    // 0x1db618: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x1db618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1db61c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1db61cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1db620: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x1db620u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1db624: 0x0  nop
    ctx->pc = 0x1db624u;
    // NOP
label_1db628:
    // 0x1db628: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1db628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1db62c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1db62cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1db630: 0x1440fd84  bnez        $v0, . + 4 + (-0x27C << 2)
    ctx->pc = 0x1DB630u;
    {
        const bool branch_taken_0x1db630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db630) {
            ctx->pc = 0x1DAC44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dac44;
        }
    }
    ctx->pc = 0x1DB638u;
    // 0x1db638: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1db638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1db63c: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1db63cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1db640: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1db640u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1db644: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1db644u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1db648: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1db648u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1db64c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1db64cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1db650: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1db650u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1db654: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1db654u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1db658: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1db658u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1db65c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1db65cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db660: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1db660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db664: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x1db664u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1db668: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB670u;
}
