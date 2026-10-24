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

// Function: entry_0013822c
// Address: 0x13822c - 0x138278
void entry_0013822c_0x13822c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013822c_0x13822c");
#endif

    ctx->pc = 0x13822cu;

    // 0x13822c: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x13822cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x138230: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x138230u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x138234: 0x24a34ec8  addiu       $v1, $a1, 0x4EC8
    ctx->pc = 0x138234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 20168));
    // 0x138238: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x138238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x13823c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x13823cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x138240: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x138240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x138244: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x138244u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x138248: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x138248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13824c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x13824cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x138250: 0x8cc30058  lw          $v1, 0x58($a2)
    ctx->pc = 0x138250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x138254: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x138254u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x138258: 0x8e540034  lw          $s4, 0x34($s2)
    ctx->pc = 0x138258u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x13825c: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x13825cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x138260: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x138260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x138264: 0xae830024  sw          $v1, 0x24($s4)
    ctx->pc = 0x138264u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 3));
    // 0x138268: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x138268u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x13826c: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x13826cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x138270: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x138270u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x138274: 0x0  nop
    ctx->pc = 0x138274u;
    // NOP
    ctx->pc = 0x138278u;
}
