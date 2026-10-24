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

// Function: entry_0030ab18
// Address: 0x30ab18 - 0x30abdc
void entry_0030ab18_0x30ab18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030ab18_0x30ab18");
#endif

    ctx->pc = 0x30ab18u;

    // 0x30ab18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30ab18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30ab1c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x30ab1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30ab20: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x30ab20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x30ab24: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x30ab24u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x30ab28: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30ab28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30ab2c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x30ab2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30ab30: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30ab30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30ab34: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x30ab34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x30ab38: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x30ab38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30ab3c: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x30ab3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x30ab40: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30ab40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30ab44: 0xe460011c  swc1        $f0, 0x11C($v1)
    ctx->pc = 0x30ab44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 284), bits); }
    // 0x30ab48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30ab48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30ab4c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x30ab4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30ab50: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x30ab50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x30ab54: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x30ab54u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x30ab58: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30ab58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30ab5c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x30ab5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30ab60: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30ab60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30ab64: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x30ab64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x30ab68: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x30ab68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30ab6c: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x30ab6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x30ab70: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30ab70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30ab74: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x30ab74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x30ab78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30ab78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30ab7c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x30ab7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30ab80: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x30ab80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x30ab84: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x30ab84u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x30ab88: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30ab88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30ab8c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x30ab8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30ab90: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30ab90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30ab94: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x30ab94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x30ab98: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x30ab98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30ab9c: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x30ab9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x30aba0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30aba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30aba4: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x30aba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x30aba8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x30aba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30abac: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x30abacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x30abb0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x30abb0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x30abb4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30abb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30abb8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x30abb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30abbc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30abbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30abc0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x30abc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x30abc4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x30abc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30abc8: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x30abc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x30abcc: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x30abccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30abd0: 0x94830140  lhu         $v1, 0x140($a0)
    ctx->pc = 0x30abd0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 320)));
    // 0x30abd4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x30abd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x30abd8: 0xa4830140  sh          $v1, 0x140($a0)
    ctx->pc = 0x30abd8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 320), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x30abdcu;
}
