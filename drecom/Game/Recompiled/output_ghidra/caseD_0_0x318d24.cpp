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

// Function: caseD_0
// Address: 0x318d24 - 0x318d5c
void caseD_0_0x318d24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x318d24");
#endif

    ctx->pc = 0x318d24u;

    // 0x318d24: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x318d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x318d28: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x318d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x318d2c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x318d2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x318d30: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x318d30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x318d34: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x318d34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x318d38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x318d38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318d3c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x318d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x318d40: 0xe46012d0  swc1        $f0, 0x12D0($v1)
    ctx->pc = 0x318d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4816), bits); }
    // 0x318d44: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x318d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x318d48: 0xac60129c  sw          $zero, 0x129C($v1)
    ctx->pc = 0x318d48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4764), GPR_U32(ctx, 0));
    // 0x318d4c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x318d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x318d50: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x318d50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x318d54: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x318d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x318d58: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x318d58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x318d5cu;
}
