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

// Function: entry_00233e08
// Address: 0x233e08 - 0x234014
void entry_00233e08_0x233e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00233e08_0x233e08");
#endif

    switch (ctx->pc) {
        case 0x233e28u: goto label_233e28;
        default: break;
    }

    ctx->pc = 0x233e08u;

    // 0x233e08: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x233e08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x233e0c: 0x344400a4  ori         $a0, $v0, 0xA4
    ctx->pc = 0x233e0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)164);
    // 0x233e10: 0xa6040140  sh          $a0, 0x140($s0)
    ctx->pc = 0x233e10u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 4));
    // 0x233e14: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x233e14u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x233e18: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x233e18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x233e1c: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x233e1cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x233e20: 0xc040c00  jal         func_103000
    ctx->pc = 0x233E20u;
    SET_GPR_U32(ctx, 31, 0x233E28u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x233E28u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x233E28u) { return; }
    ctx->pc = 0x233E28u;
label_233e28:
    // 0x233e28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x233e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233e2c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x233e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x233e30: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x233e30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x233e34: 0x24070438  addiu       $a3, $zero, 0x438
    ctx->pc = 0x233e34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1080));
    // 0x233e38: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x233e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x233e3c: 0xa4870002  sh          $a3, 0x2($a0)
    ctx->pc = 0x233e3cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x233e40: 0x8fa501c0  lw          $a1, 0x1C0($sp)
    ctx->pc = 0x233e40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x233e44: 0x24a21330  addiu       $v0, $a1, 0x1330
    ctx->pc = 0x233e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x233e48: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x233e48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x233e4c: 0x34a30100  ori         $v1, $a1, 0x100
    ctx->pc = 0x233e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)256);
    // 0x233e50: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x233e50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
    // 0x233e54: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x233e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x233e58: 0x26070150  addiu       $a3, $s0, 0x150
    ctx->pc = 0x233e58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x233e5c: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x233e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x233e60: 0x3c08c0a0  lui         $t0, 0xC0A0
    ctx->pc = 0x233e60u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)49312 << 16));
    // 0x233e64: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x233e64u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x233e68: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x233e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x233e6c: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x233e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x233e70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x233e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233e74: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x233e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x233e78: 0x949510a4  lhu         $s5, 0x10A4($a0)
    ctx->pc = 0x233e78u;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4260)));
    // 0x233e7c: 0x32a5ffff  andi        $a1, $s5, 0xFFFF
    ctx->pc = 0x233e7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x233e80: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x233e80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x233e84: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x233e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x233e88: 0x4b040  sll         $s6, $a0, 1
    ctx->pc = 0x233e88u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x233e8c: 0x162080  sll         $a0, $s6, 2
    ctx->pc = 0x233e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x233e90: 0x962021  addu        $a0, $a0, $s6
    ctx->pc = 0x233e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    // 0x233e94: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x233e94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x233e98: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x233e98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x233e9c: 0x2484cfd0  addiu       $a0, $a0, -0x3030
    ctx->pc = 0x233e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954960));
    // 0x233ea0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x233ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x233ea4: 0xa4830014  sh          $v1, 0x14($a0)
    ctx->pc = 0x233ea4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x233ea8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x233ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233eac: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x233eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x233eb0: 0x948410a4  lhu         $a0, 0x10A4($a0)
    ctx->pc = 0x233eb0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4260)));
    // 0x233eb4: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x233eb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x233eb8: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x233eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x233ebc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x233ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x233ec0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x233ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x233ec4: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x233ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x233ec8: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x233ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x233ecc: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x233eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x233ed0: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x233ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x233ed4: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x233ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x233ed8: 0x2484cfd0  addiu       $a0, $a0, -0x3030
    ctx->pc = 0x233ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954960));
    // 0x233edc: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x233edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x233ee0: 0xa4a30014  sh          $v1, 0x14($a1)
    ctx->pc = 0x233ee0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x233ee4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x233ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233ee8: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x233ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x233eec: 0x948410a4  lhu         $a0, 0x10A4($a0)
    ctx->pc = 0x233eecu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4260)));
    // 0x233ef0: 0x3087ffff  andi        $a3, $a0, 0xFFFF
    ctx->pc = 0x233ef0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x233ef4: 0x72040  sll         $a0, $a3, 1
    ctx->pc = 0x233ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x233ef8: 0x873021  addu        $a2, $a0, $a3
    ctx->pc = 0x233ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x233efc: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x233efcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x233f00: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x233f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x233f04: 0x4b080  sll         $s6, $a0, 2
    ctx->pc = 0x233f04u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x233f08: 0x2c42021  addu        $a0, $s6, $a0
    ctx->pc = 0x233f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x233f0c: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x233f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x233f10: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x233f10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x233f14: 0x2484cfd0  addiu       $a0, $a0, -0x3030
    ctx->pc = 0x233f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954960));
    // 0x233f18: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x233f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x233f1c: 0xa4830014  sh          $v1, 0x14($a0)
    ctx->pc = 0x233f1cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x233f20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x233f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233f24: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x233f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x233f28: 0x948610a4  lhu         $a2, 0x10A4($a0)
    ctx->pc = 0x233f28u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4260)));
    // 0x233f2c: 0x30c5ffff  andi        $a1, $a2, 0xFFFF
    ctx->pc = 0x233f2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x233f30: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x233f30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x233f34: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x233f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x233f38: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x233f38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x233f3c: 0x24850003  addiu       $a1, $a0, 0x3
    ctx->pc = 0x233f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x233f40: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x233f40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x233f44: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x233f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x233f48: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x233f48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x233f4c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x233f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x233f50: 0x2482cfd0  addiu       $v0, $a0, -0x3030
    ctx->pc = 0x233f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954960));
    // 0x233f54: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x233f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x233f58: 0xa4430014  sh          $v1, 0x14($v0)
    ctx->pc = 0x233f58u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x233f5c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x233f5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233f60: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x233f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x233f64: 0x944410a4  lhu         $a0, 0x10A4($v0)
    ctx->pc = 0x233f64u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4260)));
    // 0x233f68: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x233f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x233f6c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x233f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x233f70: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x233f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x233f74: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x233f74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x233f78: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x233f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x233f7c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x233f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x233f80: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x233f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x233f84: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x233f84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x233f88: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x233f88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
    // 0x233f8c: 0x24c2cfd0  addiu       $v0, $a2, -0x3030
    ctx->pc = 0x233f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954960));
    // 0x233f90: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x233f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x233f94: 0xa4470014  sh          $a3, 0x14($v0)
    ctx->pc = 0x233f94u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 7));
    // 0x233f98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x233f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233f9c: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x233f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x233fa0: 0x946310a4  lhu         $v1, 0x10A4($v1)
    ctx->pc = 0x233fa0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4260)));
    // 0x233fa4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x233fa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x233fa8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x233fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x233fac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x233facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x233fb0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x233fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x233fb4: 0x24640005  addiu       $a0, $v1, 0x5
    ctx->pc = 0x233fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x233fb8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x233fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x233fbc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x233fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x233fc0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x233fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x233fc4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x233fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x233fc8: 0x2463cfd0  addiu       $v1, $v1, -0x3030
    ctx->pc = 0x233fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954960));
    // 0x233fcc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x233fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x233fd0: 0xa4620014  sh          $v0, 0x14($v1)
    ctx->pc = 0x233fd0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x233fd4: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x233fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x233fd8: 0x2475acd0  addiu       $s5, $v1, -0x5330
    ctx->pc = 0x233fd8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946000));
    // 0x233fdc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x233fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233fe0: 0xa2a30001  sb          $v1, 0x1($s5)
    ctx->pc = 0x233fe0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x38ACD1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x38ACD1u, _value); } while (0);
    // 0x233fe4: 0x3c0443fa  lui         $a0, 0x43FA
    ctx->pc = 0x233fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17402 << 16));
    // 0x233fe8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x233fe8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x233fec: 0x0  nop
    ctx->pc = 0x233fecu;
    // NOP
    // 0x233ff0: 0xe6a00004  swc1        $f0, 0x4($s5)
    ctx->pc = 0x233ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x38ACD4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38ACD4u, _value); } while (0); }
    // 0x233ff4: 0x3c03c3fa  lui         $v1, 0xC3FA
    ctx->pc = 0x233ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50170 << 16));
    // 0x233ff8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x233ff8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x233ffc: 0x0  nop
    ctx->pc = 0x233ffcu;
    // NOP
    // 0x234000: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x234000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x38ACD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38ACD8u, _value); } while (0); }
    // 0x234004: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x234004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x234008: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x234008u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23400c: 0x0  nop
    ctx->pc = 0x23400cu;
    // NOP
    // 0x234010: 0xe6a0000c  swc1        $f0, 0xC($s5)
    ctx->pc = 0x234010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x38ACDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38ACDCu, _value); } while (0); }
    ctx->pc = 0x234014u;
}
