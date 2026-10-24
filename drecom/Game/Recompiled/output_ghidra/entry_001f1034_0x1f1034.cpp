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

// Function: entry_001f1034
// Address: 0x1f1034 - 0x1f1088
void entry_001f1034_0x1f1034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1034_0x1f1034");
#endif

    ctx->pc = 0x1f1034u;

    // 0x1f1034: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f1034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f1038: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1f1038u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1f103c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1f103cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1f1040: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x1f1040u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f1044: 0x1240001a  beqz        $s2, . + 4 + (0x1A << 2)
    ctx->pc = 0x1F1044u;
    {
        const bool branch_taken_0x1f1044 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1044) {
            ctx->pc = 0x1F10B0u;
            return;
        }
    }
    ctx->pc = 0x1F104Cu;
    // 0x1f104c: 0x24100020  addiu       $s0, $zero, 0x20
    ctx->pc = 0x1f104cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1f1050: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f1050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1054: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f1054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f1058: 0x9063007a  lbu         $v1, 0x7A($v1)
    ctx->pc = 0x1f1058u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 122)));
    // 0x1f105c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1f105cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f1060: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f1060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f1064: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F1064u;
    {
        const bool branch_taken_0x1f1064 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f1064) {
            ctx->pc = 0x1F1088u;
            return;
        }
    }
    ctx->pc = 0x1F106Cu;
    // 0x1f106c: 0x24100025  addiu       $s0, $zero, 0x25
    ctx->pc = 0x1f106cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x1f1070: 0x3c033e32  lui         $v1, 0x3E32
    ctx->pc = 0x1f1070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15922 << 16));
    // 0x1f1074: 0x3464b8c2  ori         $a0, $v1, 0xB8C2
    ctx->pc = 0x1f1074u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47298);
    // 0x1f1078: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1f1078u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f107c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f107cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1080: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f1080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f1084: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x1f1084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    ctx->pc = 0x1f1088u;
}
