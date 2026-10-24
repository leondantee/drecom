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

// Function: entry_00346020
// Address: 0x346020 - 0x346094
void entry_00346020_0x346020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00346020_0x346020");
#endif

    ctx->pc = 0x346020u;

    // 0x346020: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x346020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x346024: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x346024u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x346028: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x346028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x34602c: 0x30640020  andi        $a0, $v1, 0x20
    ctx->pc = 0x34602cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x346030: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x346030u;
    {
        const bool branch_taken_0x346030 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x346030) {
            ctx->pc = 0x346094u;
            return;
        }
    }
    ctx->pc = 0x346038u;
    // 0x346038: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x346038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x34603c: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x34603cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x346040: 0xa0c00028  sb          $zero, 0x28($a2)
    ctx->pc = 0x346040u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x346044: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x346044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x346048: 0x8fa800b8  lw          $t0, 0xB8($sp)
    ctx->pc = 0x346048u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x34604c: 0x25031330  addiu       $v1, $t0, 0x1330
    ctx->pc = 0x34604cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4912));
    // 0x346050: 0xa0670029  sb          $a3, 0x29($v1)
    ctx->pc = 0x346050u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 7));
    // 0x346054: 0x3c033ccc  lui         $v1, 0x3CCC
    ctx->pc = 0x346054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15564 << 16));
    // 0x346058: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x346058u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x34605c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34605cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346060: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x346060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x346064: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x346064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x346068: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x346068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x34606c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x34606cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x346070: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x346070u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x346074: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x346074u;
    {
        const bool branch_taken_0x346074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x346074) {
            ctx->pc = 0x346094u;
            return;
        }
    }
    ctx->pc = 0x34607Cu;
    // 0x34607c: 0x3c053d4c  lui         $a1, 0x3D4C
    ctx->pc = 0x34607cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15692 << 16));
    // 0x346080: 0x34a4cccd  ori         $a0, $a1, 0xCCCD
    ctx->pc = 0x346080u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
    // 0x346084: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x346084u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346088: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x346088u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x34608c: 0x24c71330  addiu       $a3, $a2, 0x1330
    ctx->pc = 0x34608cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x346090: 0xe4e00030  swc1        $f0, 0x30($a3)
    ctx->pc = 0x346090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 48), bits); }
    ctx->pc = 0x346094u;
}
