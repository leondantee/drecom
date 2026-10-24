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

// Function: Em19_R1_br_sleep
// Address: 0x2e4df0 - 0x2e4fe8
void Em19_R1_br_sleep_0x2e4df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em19_R1_br_sleep_0x2e4df0");
#endif

    switch (ctx->pc) {
        case 0x2e4e64u: goto label_2e4e64;
        case 0x2e4e78u: goto label_2e4e78;
        case 0x2e4e8cu: goto label_2e4e8c;
        case 0x2e4f44u: goto label_2e4f44;
        default: break;
    }

    ctx->pc = 0x2e4df0u;

    // 0x2e4df0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2e4df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2e4df4: 0x7fbf0060  sq          $ra, 0x60($sp)
    ctx->pc = 0x2e4df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x2e4df8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2e4df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2e4dfc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e4dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2e4e00: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e4e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e4e04: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e4e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e4e08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e4e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e4e0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e4e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e4e10: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x2e4e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x2e4e14: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2e4e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e4e18: 0x24751330  addiu       $s5, $v1, 0x1330
    ctx->pc = 0x2e4e18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2e4e1c: 0x8ea300ac  lw          $v1, 0xAC($s5)
    ctx->pc = 0x2e4e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 172)));
    // 0x2e4e20: 0x10600067  beqz        $v1, . + 4 + (0x67 << 2)
    ctx->pc = 0x2E4E20u;
    {
        const bool branch_taken_0x2e4e20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4e20) {
            ctx->pc = 0x2E4FC0u;
            goto label_2e4fc0;
        }
    }
    ctx->pc = 0x2E4E28u;
    // 0x2e4e28: 0x8eb400ac  lw          $s4, 0xAC($s5)
    ctx->pc = 0x2e4e28u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 172)));
    // 0x2e4e2c: 0x868410a6  lh          $a0, 0x10A6($s4)
    ctx->pc = 0x2e4e2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4262)));
    // 0x2e4e30: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2e4e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e4e34: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x2e4e34u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x2e4e38: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2e4e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e4e3c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2e4e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2e4e40: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x2e4e40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x2e4e44: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2e4e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2e4e48: 0x1460005d  bnez        $v1, . + 4 + (0x5D << 2)
    ctx->pc = 0x2E4E48u;
    {
        const bool branch_taken_0x2e4e48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4e48) {
            ctx->pc = 0x2E4FC0u;
            goto label_2e4fc0;
        }
    }
    ctx->pc = 0x2E4E50u;
    // 0x2e4e50: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2e4e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e4e54: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x2e4e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2e4e58: 0x26850120  addiu       $a1, $s4, 0x120
    ctx->pc = 0x2e4e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 288));
    // 0x2e4e5c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2E4E5Cu;
    SET_GPR_U32(ctx, 31, 0x2E4E64u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2E4E64u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2E4E64u) { return; }
    ctx->pc = 0x2E4E64u;
label_2e4e64:
    // 0x2e4e64: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2e4e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e4e68: 0x24440170  addiu       $a0, $v0, 0x170
    ctx->pc = 0x2e4e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x2e4e6c: 0x26850170  addiu       $a1, $s4, 0x170
    ctx->pc = 0x2e4e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 368));
    // 0x2e4e70: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2E4E70u;
    SET_GPR_U32(ctx, 31, 0x2E4E78u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2E4E78u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2E4E78u) { return; }
    ctx->pc = 0x2E4E78u;
label_2e4e78:
    // 0x2e4e78: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2e4e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e4e7c: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x2e4e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2e4e80: 0x268500d0  addiu       $a1, $s4, 0xD0
    ctx->pc = 0x2e4e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 208));
    // 0x2e4e84: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2E4E84u;
    SET_GPR_U32(ctx, 31, 0x2E4E8Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2E4E8Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2E4E8Cu) { return; }
    ctx->pc = 0x2E4E8Cu;
label_2e4e8c:
    // 0x2e4e8c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2e4e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e4e90: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2e4e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e4e94: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2e4e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2e4e98: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2e4e98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2e4e9c: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x2e4e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e4ea0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2e4ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2e4ea4: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x2e4ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x2e4ea8: 0x3463fffb  ori         $v1, $v1, 0xFFFB
    ctx->pc = 0x2e4ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65531);
    // 0x2e4eac: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2e4eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2e4eb0: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2e4eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x2e4eb4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e4eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e4eb8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2e4eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e4ebc: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x2e4ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e4ec0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e4ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e4ec4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2e4ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e4ec8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e4ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e4ecc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2e4eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e4ed0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2e4ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e4ed4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2e4ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e4ed8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2e4ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e4edc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e4edcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e4ee0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2e4ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e4ee4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e4ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e4ee8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2e4ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e4eec: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e4eecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e4ef0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2e4ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e4ef4: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e4ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e4ef8: 0x24732710  addiu       $s3, $v1, 0x2710
    ctx->pc = 0x2e4ef8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 10000));
    // 0x2e4efc: 0x96630140  lhu         $v1, 0x140($s3)
    ctx->pc = 0x2e4efcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 320)));
    // 0x2e4f00: 0x3063ffef  andi        $v1, $v1, 0xFFEF
    ctx->pc = 0x2e4f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65519);
    // 0x2e4f04: 0xa6630140  sh          $v1, 0x140($s3)
    ctx->pc = 0x2e4f04u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e4f08: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2e4f08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2e4f0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e4f0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4f10: 0x0  nop
    ctx->pc = 0x2e4f10u;
    // NOP
    // 0x2e4f14: 0xe6600128  swc1        $f0, 0x128($s3)
    ctx->pc = 0x2e4f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 296), bits); }
    // 0x2e4f18: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2e4f18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2e4f1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e4f1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4f20: 0x0  nop
    ctx->pc = 0x2e4f20u;
    // NOP
    // 0x2e4f24: 0xe660012c  swc1        $f0, 0x12C($s3)
    ctx->pc = 0x2e4f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 300), bits); }
    // 0x2e4f28: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2e4f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2e4f2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e4f2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4f30: 0x0  nop
    ctx->pc = 0x2e4f30u;
    // NOP
    // 0x2e4f34: 0xe6600130  swc1        $f0, 0x130($s3)
    ctx->pc = 0x2e4f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 304), bits); }
    // 0x2e4f38: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2e4f38u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e4f3c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2E4F3Cu;
    {
        const bool branch_taken_0x2e4f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4f3c) {
            ctx->pc = 0x2E4F80u;
            goto label_2e4f80;
        }
    }
    ctx->pc = 0x2E4F44u;
label_2e4f44:
    // 0x2e4f44: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x2e4f44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2e4f48: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2e4f48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2e4f4c: 0x24638c08  addiu       $v1, $v1, -0x73F8
    ctx->pc = 0x2e4f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937608));
    // 0x2e4f50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e4f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e4f54: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x2e4f54u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e4f58: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x2e4f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e4f5c: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x2e4f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x2e4f60: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2e4f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2e4f64: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2e4f64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e4f68: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x2e4f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x2e4f6c: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x2e4f6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e4f70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e4f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e4f74: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x2e4f74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e4f78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e4f78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e4f7c: 0x0  nop
    ctx->pc = 0x2e4f7cu;
    // NOP
label_2e4f80:
    // 0x2e4f80: 0x1a20fff0  blez        $s1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2E4F80u;
    {
        const bool branch_taken_0x2e4f80 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x2e4f80) {
            ctx->pc = 0x2E4F44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4f44;
        }
    }
    ctx->pc = 0x2E4F88u;
    // 0x2e4f88: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2e4f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e4f8c: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x2e4f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2e4f90: 0x24700ab0  addiu       $s0, $v1, 0xAB0
    ctx->pc = 0x2e4f90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2736));
    // 0x2e4f94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e4f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e4f98: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x2e4f98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e4f9c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2e4f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e4fa0: 0x8c700058  lw          $s0, 0x58($v1)
    ctx->pc = 0x2e4fa0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2e4fa4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e4fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e4fa8: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x2e4fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e4fac: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2e4facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e4fb0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x2e4fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2e4fb4: 0x24700990  addiu       $s0, $v1, 0x990
    ctx->pc = 0x2e4fb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2448));
    // 0x2e4fb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e4fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e4fbc: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x2e4fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_2e4fc0:
    // 0x2e4fc0: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x2e4fc0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e4fc4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2e4fc4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e4fc8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e4fc8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e4fcc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e4fccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e4fd0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e4fd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e4fd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e4fd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4fd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e4fd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4fdc: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2e4fdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2e4fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4FE8u;
}
