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

// Function: caseD_2
// Address: 0x1b5a80 - 0x1b5b10
void caseD_2_0x1b5a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1b5a80");
#endif

    switch (ctx->pc) {
        case 0x1b5aacu: goto label_1b5aac;
        default: break;
    }

    ctx->pc = 0x1b5a80u;

    // 0x1b5a80: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1b5a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b5a84: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b5a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5a88: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x1b5a88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b5a8c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b5a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5a90: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b5a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5a94: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1b5a94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1b5a98: 0x2406004b  addiu       $a2, $zero, 0x4B
    ctx->pc = 0x1b5a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x1b5a9c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b5a9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b5aa0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b5aa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1b5aa4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1B5AA4u;
    SET_GPR_U32(ctx, 31, 0x1B5AACu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B5AA4u, 0x1B5AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5AACu;
label_1b5aac:
    // 0x1b5aac: 0x3c0442e0  lui         $a0, 0x42E0
    ctx->pc = 0x1b5aacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17120 << 16));
    // 0x1b5ab0: 0x34826667  ori         $v0, $a0, 0x6667
    ctx->pc = 0x1b5ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26215);
    // 0x1b5ab4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b5ab4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5ab8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b5ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5abc: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1b5abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x1b5ac0: 0x3c0340a3  lui         $v1, 0x40A3
    ctx->pc = 0x1b5ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16547 << 16));
    // 0x1b5ac4: 0x34633334  ori         $v1, $v1, 0x3334
    ctx->pc = 0x1b5ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13108);
    // 0x1b5ac8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b5ac8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5acc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b5accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5ad0: 0xe4801280  swc1        $f0, 0x1280($a0)
    ctx->pc = 0x1b5ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4736), bits); }
    // 0x1b5ad4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b5ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5ad8: 0xaca01b64  sw          $zero, 0x1B64($a1)
    ctx->pc = 0x1b5ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7012), GPR_U32(ctx, 0));
    // 0x1b5adc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b5adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5ae0: 0xac401b68  sw          $zero, 0x1B68($v0)
    ctx->pc = 0x1b5ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7016), GPR_U32(ctx, 0));
    // 0x1b5ae4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1b5ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b5ae8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b5ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5aec: 0xa4a4127e  sh          $a0, 0x127E($a1)
    ctx->pc = 0x1b5aecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4734), (uint16_t)GPR_U32(ctx, 4));
    // 0x1b5af0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b5af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b5af4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b5af4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5af8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b5af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5afc: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x1b5afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    // 0x1b5b00: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b5b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5b04: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1b5b04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1b5b08: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1b5b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b5b0c: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x1b5b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1b5b10u;
}
