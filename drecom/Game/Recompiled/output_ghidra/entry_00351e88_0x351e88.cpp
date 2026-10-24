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

// Function: entry_00351e88
// Address: 0x351e88 - 0x351f18
void entry_00351e88_0x351e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00351e88_0x351e88");
#endif

    switch (ctx->pc) {
        case 0x351e9cu: goto label_351e9c;
        case 0x351ea8u: goto label_351ea8;
        default: break;
    }

    ctx->pc = 0x351e88u;

    // 0x351e88: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x351e88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x351e8c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x351e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351e90: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x351e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x351e94: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x351E94u;
    SET_GPR_U32(ctx, 31, 0x351E9Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x351E94u, 0x351E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351E9Cu;
label_351e9c:
    // 0x351e9c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x351e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351ea0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x351EA0u;
    SET_GPR_U32(ctx, 31, 0x351EA8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x351EA0u, 0x351EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351EA8u;
label_351ea8:
    // 0x351ea8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x351ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351eac: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x351eacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x351eb0: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x351EB0u;
    {
        const bool branch_taken_0x351eb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x351eb0) {
            ctx->pc = 0x351F98u;
            return;
        }
    }
    ctx->pc = 0x351EB8u;
    // 0x351eb8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x351eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x351ebc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x351ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351ec0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x351ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x351ec4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x351ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x351ec8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x351ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351ecc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x351eccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x351ed0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x351ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351ed4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x351ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x351ed8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x351ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351edc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x351edcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x351ee0: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x351ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x351ee4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x351ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351ee8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x351ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x351eec: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x351eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x351ef0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x351ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351ef4: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x351ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x351ef8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x351ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351efc: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x351efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x351f00: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x351f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351f04: 0xe46011f8  swc1        $f0, 0x11F8($v1)
    ctx->pc = 0x351f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4600), bits); }
    // 0x351f08: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x351f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351f0c: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x351f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x351f10: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x351F10u;
    {
        const bool branch_taken_0x351f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351f10) {
            ctx->pc = 0x351F98u;
            return;
        }
    }
    ctx->pc = 0x351F18u;
}
