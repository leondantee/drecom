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

// Function: entry_00348e38
// Address: 0x348e38 - 0x348e84
void entry_00348e38_0x348e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00348e38_0x348e38");
#endif

    ctx->pc = 0x348e38u;

    // 0x348e38: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x348e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348e3c: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x348e3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x348e40: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x348e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x348e44: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x348e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x348e48: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x348E48u;
    {
        const bool branch_taken_0x348e48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x348e48) {
            ctx->pc = 0x348E84u;
            return;
        }
    }
    ctx->pc = 0x348E50u;
    // 0x348e50: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x348e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348e54: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x348e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x348e58: 0xa0600028  sb          $zero, 0x28($v1)
    ctx->pc = 0x348e58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x348e5c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x348e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x348e60: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x348e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348e64: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x348e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x348e68: 0xa0640029  sb          $a0, 0x29($v1)
    ctx->pc = 0x348e68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 4));
    // 0x348e6c: 0x3c043d4c  lui         $a0, 0x3D4C
    ctx->pc = 0x348e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15692 << 16));
    // 0x348e70: 0x3483cccd  ori         $v1, $a0, 0xCCCD
    ctx->pc = 0x348e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x348e74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x348e74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348e78: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x348e78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348e7c: 0x24a31330  addiu       $v1, $a1, 0x1330
    ctx->pc = 0x348e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x348e80: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x348e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    ctx->pc = 0x348e84u;
}
