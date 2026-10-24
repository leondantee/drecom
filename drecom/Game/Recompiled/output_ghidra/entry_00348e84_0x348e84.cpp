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

// Function: entry_00348e84
// Address: 0x348e84 - 0x348ecc
void entry_00348e84_0x348e84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00348e84_0x348e84");
#endif

    ctx->pc = 0x348e84u;

    // 0x348e84: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x348e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348e88: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x348e88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x348e8c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x348e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x348e90: 0x30640010  andi        $a0, $v1, 0x10
    ctx->pc = 0x348e90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x348e94: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x348E94u;
    {
        const bool branch_taken_0x348e94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x348e94) {
            ctx->pc = 0x348ECCu;
            return;
        }
    }
    ctx->pc = 0x348E9Cu;
    // 0x348e9c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x348e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348ea0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x348ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x348ea4: 0xa0600028  sb          $zero, 0x28($v1)
    ctx->pc = 0x348ea4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x348ea8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x348ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348eac: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x348eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x348eb0: 0xa0600029  sb          $zero, 0x29($v1)
    ctx->pc = 0x348eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x348eb4: 0x3c043d4c  lui         $a0, 0x3D4C
    ctx->pc = 0x348eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15692 << 16));
    // 0x348eb8: 0x3483cccd  ori         $v1, $a0, 0xCCCD
    ctx->pc = 0x348eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x348ebc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x348ebcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348ec0: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x348ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348ec4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x348ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x348ec8: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x348ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    ctx->pc = 0x348eccu;
}
