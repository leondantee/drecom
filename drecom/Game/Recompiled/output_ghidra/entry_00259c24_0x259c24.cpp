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

// Function: entry_00259c24
// Address: 0x259c24 - 0x259d38
void entry_00259c24_0x259c24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00259c24_0x259c24");
#endif

    ctx->pc = 0x259c24u;

    // 0x259c24: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259c28: 0xa04009e7  sb          $zero, 0x9E7($v0)
    ctx->pc = 0x259c28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2535), (uint8_t)GPR_U32(ctx, 0));
    // 0x259c2c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x259c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259c30: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259c34: 0x8c6305f8  lw          $v1, 0x5F8($v1)
    ctx->pc = 0x259c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1528)));
    // 0x259c38: 0x244209d8  addiu       $v0, $v0, 0x9D8
    ctx->pc = 0x259c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2520));
    // 0x259c3c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x259c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x259c40: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x259c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x259c44: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x259c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259c48: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259c4c: 0x246309d8  addiu       $v1, $v1, 0x9D8
    ctx->pc = 0x259c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2520));
    // 0x259c50: 0x244209dc  addiu       $v0, $v0, 0x9DC
    ctx->pc = 0x259c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2524));
    // 0x259c54: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x259c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x259c58: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x259c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x259c5c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259c60: 0x944209d8  lhu         $v0, 0x9D8($v0)
    ctx->pc = 0x259c60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2520)));
    // 0x259c64: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x259c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x259c68: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x259c68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x259c6c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259c70: 0xac4309f8  sw          $v1, 0x9F8($v0)
    ctx->pc = 0x259c70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2552), GPR_U32(ctx, 3));
    // 0x259c74: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259c78: 0x944309ec  lhu         $v1, 0x9EC($v0)
    ctx->pc = 0x259c78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2540)));
    // 0x259c7c: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x259c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x259c80: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x259c80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x259c84: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259c88: 0xac4309fc  sw          $v1, 0x9FC($v0)
    ctx->pc = 0x259c88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2556), GPR_U32(ctx, 3));
    // 0x259c8c: 0x97a300de  lhu         $v1, 0xDE($sp)
    ctx->pc = 0x259c8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 222)));
    // 0x259c90: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259c94: 0xa44309ee  sh          $v1, 0x9EE($v0)
    ctx->pc = 0x259c94u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2542), (uint16_t)GPR_U32(ctx, 3));
    // 0x259c98: 0x8fb700e8  lw          $s7, 0xE8($sp)
    ctx->pc = 0x259c98u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259c9c: 0xa6e009f0  sh          $zero, 0x9F0($s7)
    ctx->pc = 0x259c9cu;
    WRITE16(ADD32(GPR_U32(ctx, 23), 2544), (uint16_t)GPR_U32(ctx, 0));
    // 0x259ca0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259ca4: 0x944209ec  lhu         $v0, 0x9EC($v0)
    ctx->pc = 0x259ca4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2540)));
    // 0x259ca8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x259ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x259cac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x259cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x259cb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x259cb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x259cb4: 0x0  nop
    ctx->pc = 0x259cb4u;
    // NOP
    // 0x259cb8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x259cb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x259cbc: 0x8fbe00e8  lw          $fp, 0xE8($sp)
    ctx->pc = 0x259cbcu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259cc0: 0xe7c009d4  swc1        $f0, 0x9D4($fp)
    ctx->pc = 0x259cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 2516), bits); }
    // 0x259cc4: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x259cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x259cc8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259ccc: 0xac4309f4  sw          $v1, 0x9F4($v0)
    ctx->pc = 0x259cccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2548), GPR_U32(ctx, 3));
    // 0x259cd0: 0x97a30100  lhu         $v1, 0x100($sp)
    ctx->pc = 0x259cd0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x259cd4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259cd8: 0xa44309e0  sh          $v1, 0x9E0($v0)
    ctx->pc = 0x259cd8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2528), (uint16_t)GPR_U32(ctx, 3));
    // 0x259cdc: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259ce0: 0x8c5409f8  lw          $s4, 0x9F8($v0)
    ctx->pc = 0x259ce0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2552)));
    // 0x259ce4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259ce8: 0x944209e0  lhu         $v0, 0x9E0($v0)
    ctx->pc = 0x259ce8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2528)));
    // 0x259cec: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x259cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x259cf0: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x259cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x259cf4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x259CF4u;
    {
        const bool branch_taken_0x259cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259cf4) {
            ctx->pc = 0x259D38u;
            return;
        }
    }
    ctx->pc = 0x259CFCu;
    // 0x259cfc: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x259cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x259d00: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x259d00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x259d04: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259d08: 0x8c4309fc  lw          $v1, 0x9FC($v0)
    ctx->pc = 0x259d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2556)));
    // 0x259d0c: 0x283102b  sltu        $v0, $s4, $v1
    ctx->pc = 0x259d0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x259d10: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x259D10u;
    {
        const bool branch_taken_0x259d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x259d10) {
            ctx->pc = 0x259D68u;
            return;
        }
    }
    ctx->pc = 0x259D18u;
    // 0x259d18: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259d1c: 0x8c4209fc  lw          $v0, 0x9FC($v0)
    ctx->pc = 0x259d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2556)));
    // 0x259d20: 0x282a023  subu        $s4, $s4, $v0
    ctx->pc = 0x259d20u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x259d24: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x259d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x259d28: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259d2c: 0xa04309e7  sb          $v1, 0x9E7($v0)
    ctx->pc = 0x259d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2535), (uint8_t)GPR_U32(ctx, 3));
    // 0x259d30: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x259D30u;
    {
        const bool branch_taken_0x259d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x259d30) {
            ctx->pc = 0x259D68u;
            return;
        }
    }
    ctx->pc = 0x259D38u;
}
