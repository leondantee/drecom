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

// Function: entry_0032fd54
// Address: 0x32fd54 - 0x32fe98
void entry_0032fd54_0x32fd54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032fd54_0x32fd54");
#endif

    ctx->pc = 0x32fd54u;

    // 0x32fd54: 0x8e675dd0  lw          $a3, 0x5DD0($s3)
    ctx->pc = 0x32fd54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24016)));
    // 0x32fd58: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x32fd58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x32fd5c: 0xae675dd0  sw          $a3, 0x5DD0($s3)
    ctx->pc = 0x32fd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24016), GPR_U32(ctx, 7));
    // 0x32fd60: 0x8fa7025c  lw          $a3, 0x25C($sp)
    ctx->pc = 0x32fd60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
    // 0x32fd64: 0x8ce30258  lw          $v1, 0x258($a3)
    ctx->pc = 0x32fd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 600)));
    // 0x32fd68: 0x24021770  addiu       $v0, $zero, 0x1770
    ctx->pc = 0x32fd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
    // 0x32fd6c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x32fd6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x32fd70: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x32fd70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x32fd74: 0x2466a6a0  addiu       $a2, $v1, -0x5960
    ctx->pc = 0x32fd74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944416));
    // 0x32fd78: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x32fd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x32fd7c: 0x826365b3  lb          $v1, 0x65B3($s3)
    ctx->pc = 0x32fd7cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 26035)));
    // 0x32fd80: 0x3963c  dsll32      $s2, $v1, 24
    ctx->pc = 0x32fd80u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 24));
    // 0x32fd84: 0x12963f  dsra32      $s2, $s2, 24
    ctx->pc = 0x32fd84u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 24));
    // 0x32fd88: 0x123940  sll         $a3, $s2, 5
    ctx->pc = 0x32fd88u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x32fd8c: 0xf23023  subu        $a2, $a3, $s2
    ctx->pc = 0x32fd8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x32fd90: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x32fd90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x32fd94: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x32fd94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x32fd98: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x32fd98u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x32fd9c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x32fd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x32fda0: 0x8fa3025c  lw          $v1, 0x25C($sp)
    ctx->pc = 0x32fda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
    // 0x32fda4: 0x8c67025c  lw          $a3, 0x25C($v1)
    ctx->pc = 0x32fda4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 604)));
    // 0x32fda8: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x32fda8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x32fdac: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x32fdacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x32fdb0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32fdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32fdb4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x32fdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32fdb8: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x32fdb8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32fdbc: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x32fdbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x32fdc0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x32fdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x32fdc4: 0xc31023  subu        $v0, $a2, $v1
    ctx->pc = 0x32fdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x32fdc8: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x32fdc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x32fdcc: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x32fdccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x32fdd0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32fdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x32fdd4: 0xafa2026c  sw          $v0, 0x26C($sp)
    ctx->pc = 0x32fdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 2));
    // 0x32fdd8: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x32fdd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x32fddc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x32fddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x32fde0: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x32fde0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x32fde4: 0x2466ffff  addiu       $a2, $v1, -0x1
    ctx->pc = 0x32fde4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x32fde8: 0xafa60270  sw          $a2, 0x270($sp)
    ctx->pc = 0x32fde8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 6));
    // 0x32fdec: 0x8fa2025c  lw          $v0, 0x25C($sp)
    ctx->pc = 0x32fdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
    // 0x32fdf0: 0x8c430258  lw          $v1, 0x258($v0)
    ctx->pc = 0x32fdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
    // 0x32fdf4: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x32fdf4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32fdf8: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x32fdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x32fdfc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x32fdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32fe00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32fe00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32fe04: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x32fe04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32fe08: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x32fe08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x32fe0c: 0x24424ab0  addiu       $v0, $v0, 0x4AB0
    ctx->pc = 0x32fe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19120));
    // 0x32fe10: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x32fe10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x32fe14: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x32fe14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x32fe18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32fe18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32fe1c: 0x8fa3025c  lw          $v1, 0x25C($sp)
    ctx->pc = 0x32fe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
    // 0x32fe20: 0x8c63025c  lw          $v1, 0x25C($v1)
    ctx->pc = 0x32fe20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 604)));
    // 0x32fe24: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x32fe24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x32fe28: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x32fe28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32fe2c: 0xafa60268  sw          $a2, 0x268($sp)
    ctx->pc = 0x32fe2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 6));
    // 0x32fe30: 0x8fa2025c  lw          $v0, 0x25C($sp)
    ctx->pc = 0x32fe30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
    // 0x32fe34: 0x8c420258  lw          $v0, 0x258($v0)
    ctx->pc = 0x32fe34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
    // 0x32fe38: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x32fe38u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32fe3c: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x32fe3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x32fe40: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x32fe40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32fe44: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x32fe44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32fe48: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x32fe48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x32fe4c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x32fe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x32fe50: 0x24425e60  addiu       $v0, $v0, 0x5E60
    ctx->pc = 0x32fe50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24160));
    // 0x32fe54: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x32fe54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x32fe58: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x32fe58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x32fe5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32fe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32fe60: 0x8fa6025c  lw          $a2, 0x25C($sp)
    ctx->pc = 0x32fe60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
    // 0x32fe64: 0x8cc3025c  lw          $v1, 0x25C($a2)
    ctx->pc = 0x32fe64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 604)));
    // 0x32fe68: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x32fe68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x32fe6c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x32fe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32fe70: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x32fe70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x32fe74: 0x8fa30268  lw          $v1, 0x268($sp)
    ctx->pc = 0x32fe74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x32fe78: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x32fe78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32fe7c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x32FE7Cu;
    {
        const bool branch_taken_0x32fe7c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x32fe7c) {
            ctx->pc = 0x32FE98u;
            return;
        }
    }
    ctx->pc = 0x32FE84u;
    // 0x32fe84: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x32fe84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32fe88: 0x0  nop
    ctx->pc = 0x32fe88u;
    // NOP
    // 0x32fe8c: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x32fe8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32fe90: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x32FE90u;
    {
        const bool branch_taken_0x32fe90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32fe90) {
            ctx->pc = 0x32FEB4u;
            return;
        }
    }
    ctx->pc = 0x32FE98u;
}
