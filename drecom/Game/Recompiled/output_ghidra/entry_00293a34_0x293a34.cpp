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

// Function: entry_00293a34
// Address: 0x293a34 - 0x293ac8
void entry_00293a34_0x293a34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00293a34_0x293a34");
#endif

    ctx->pc = 0x293a34u;

    // 0x293a34: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x293a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x293a38: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x293a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x293a3c: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x293a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x293a40: 0x34455556  ori         $a1, $v0, 0x5556
    ctx->pc = 0x293a40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x293a44: 0xa40018  mult        $zero, $a1, $a0
    ctx->pc = 0x293a44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x293a48: 0x437c2  srl         $a2, $a0, 31
    ctx->pc = 0x293a48u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x293a4c: 0x0  nop
    ctx->pc = 0x293a4cu;
    // NOP
    // 0x293a50: 0x1010  mfhi        $v0
    ctx->pc = 0x293a50u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x293a54: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x293a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x293a58: 0x8fa50124  lw          $a1, 0x124($sp)
    ctx->pc = 0x293a58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x293a5c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x293a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x293a60: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x293a60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x293a64: 0x34645556  ori         $a0, $v1, 0x5556
    ctx->pc = 0x293a64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x293a68: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x293a68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x293a6c: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x293a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x293a70: 0x0  nop
    ctx->pc = 0x293a70u;
    // NOP
    // 0x293a74: 0x1810  mfhi        $v1
    ctx->pc = 0x293a74u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x293a78: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x293a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x293a7c: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x293a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x293a80: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x293a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x293a84: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x293a84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x293a88: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x293a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x293a8c: 0x3c045555  lui         $a0, 0x5555
    ctx->pc = 0x293a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21845 << 16));
    // 0x293a90: 0x34835556  ori         $v1, $a0, 0x5556
    ctx->pc = 0x293a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)21846);
    // 0x293a94: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x293a94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x293a98: 0x53fc2  srl         $a3, $a1, 31
    ctx->pc = 0x293a98u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x293a9c: 0x0  nop
    ctx->pc = 0x293a9cu;
    // NOP
    // 0x293aa0: 0x2810  mfhi        $a1
    ctx->pc = 0x293aa0u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x293aa4: 0xa71821  addu        $v1, $a1, $a3
    ctx->pc = 0x293aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x293aa8: 0x33400  sll         $a2, $v1, 16
    ctx->pc = 0x293aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x293aac: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x293aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x293ab0: 0x8fa4012c  lw          $a0, 0x12C($sp)
    ctx->pc = 0x293ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x293ab4: 0x41e00  sll         $v1, $a0, 24
    ctx->pc = 0x293ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x293ab8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x293ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x293abc: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x293abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x293ac0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x293ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x293ac4: 0x0  nop
    ctx->pc = 0x293ac4u;
    // NOP
    ctx->pc = 0x293ac8u;
}
