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
// Address: 0x1bbea8 - 0x1bbf38
void caseD_2_0x1bbea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1bbea8");
#endif

    switch (ctx->pc) {
        case 0x1bbed4u: goto label_1bbed4;
        default: break;
    }

    ctx->pc = 0x1bbea8u;

    // 0x1bbea8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1bbea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1bbeac: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bbeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bbeb0: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x1bbeb0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bbeb4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bbeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bbeb8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bbeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bbebc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1bbebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1bbec0: 0x24060051  addiu       $a2, $zero, 0x51
    ctx->pc = 0x1bbec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x1bbec4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bbec4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bbec8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bbec8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bbecc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BBECCu;
    SET_GPR_U32(ctx, 31, 0x1BBED4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BBECCu, 0x1BBED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBED4u;
label_1bbed4:
    // 0x1bbed4: 0x3c024306  lui         $v0, 0x4306
    ctx->pc = 0x1bbed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17158 << 16));
    // 0x1bbed8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1bbed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x1bbedc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bbedcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bbee0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bbee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bbee4: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1bbee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x1bbee8: 0x3c034106  lui         $v1, 0x4106
    ctx->pc = 0x1bbee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16646 << 16));
    // 0x1bbeec: 0x34646666  ori         $a0, $v1, 0x6666
    ctx->pc = 0x1bbeecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x1bbef0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1bbef0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bbef4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bbef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bbef8: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x1bbef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x1bbefc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bbefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bbf00: 0xac401b64  sw          $zero, 0x1B64($v0)
    ctx->pc = 0x1bbf00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7012), GPR_U32(ctx, 0));
    // 0x1bbf04: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bbf04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bbf08: 0xac801b68  sw          $zero, 0x1B68($a0)
    ctx->pc = 0x1bbf08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7016), GPR_U32(ctx, 0));
    // 0x1bbf0c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1bbf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1bbf10: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bbf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bbf14: 0xa445127e  sh          $a1, 0x127E($v0)
    ctx->pc = 0x1bbf14u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 5));
    // 0x1bbf18: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1bbf18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1bbf1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bbf1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bbf20: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bbf20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bbf24: 0xe4801b50  swc1        $f0, 0x1B50($a0)
    ctx->pc = 0x1bbf24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6992), bits); }
    // 0x1bbf28: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bbf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bbf2c: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x1bbf2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1bbf30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1bbf30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1bbf34: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x1bbf34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1bbf38u;
}
