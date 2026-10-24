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

// Function: entry_002df0ec
// Address: 0x2df0ec - 0x2df158
void entry_002df0ec_0x2df0ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002df0ec_0x2df0ec");
#endif

    switch (ctx->pc) {
        case 0x2df118u: goto label_2df118;
        default: break;
    }

    ctx->pc = 0x2df0ecu;

    // 0x2df0ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2df0f0: 0x8c6312c4  lw          $v1, 0x12C4($v1)
    ctx->pc = 0x2df0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4804)));
    // 0x2df0f4: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2df0f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2df0f8: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2DF0F8u;
    {
        const bool branch_taken_0x2df0f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df0f8) {
            ctx->pc = 0x2DF158u;
            return;
        }
    }
    ctx->pc = 0x2DF100u;
    // 0x2df100: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2df104: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2df104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2df108: 0xc46c12d0  lwc1        $f12, 0x12D0($v1)
    ctx->pc = 0x2df108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2df10c: 0xc44d12d8  lwc1        $f13, 0x12D8($v0)
    ctx->pc = 0x2df10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2df110: 0xc0455e6  jal         func_115798
    ctx->pc = 0x2DF110u;
    SET_GPR_U32(ctx, 31, 0x2DF118u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x2DF110u, 0x2DF118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF118u;
label_2df118:
    // 0x2df118: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2df11c: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x2df11cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
    // 0x2df120: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2df120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df124: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2df128: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2df128u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2df12c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2df12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2df130: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2df134: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2df134u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2df138: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2df13c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2df13cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df140: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2df144: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2df144u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df148: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2df14c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2df14cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2df150: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2DF150u;
    {
        const bool branch_taken_0x2df150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df150) {
            ctx->pc = 0x2DF1F0u;
            return;
        }
    }
    ctx->pc = 0x2DF158u;
}
