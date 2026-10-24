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

// Function: entry_00347b88
// Address: 0x347b88 - 0x347bc8
void entry_00347b88_0x347b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00347b88_0x347b88");
#endif

    ctx->pc = 0x347b88u;

    // 0x347b88: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x347b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x347b8c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347b90: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x347b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x347b94: 0xa4640034  sh          $a0, 0x34($v1)
    ctx->pc = 0x347b94u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 52), (uint16_t)GPR_U32(ctx, 4));
    // 0x347b98: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347b9c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x347b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x347ba0: 0xa0600028  sb          $zero, 0x28($v1)
    ctx->pc = 0x347ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x347ba4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347ba8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x347ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x347bac: 0xa0600029  sb          $zero, 0x29($v1)
    ctx->pc = 0x347bacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x347bb0: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x347bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x347bb4: 0x3472cccd  ori         $s2, $v1, 0xCCCD
    ctx->pc = 0x347bb4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x347bb8: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x347bb8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347bbc: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x347bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347bc0: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x347bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x347bc4: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x347bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    ctx->pc = 0x347bc8u;
}
