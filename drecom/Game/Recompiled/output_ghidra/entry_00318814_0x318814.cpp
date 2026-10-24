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

// Function: entry_00318814
// Address: 0x318814 - 0x31884c
void entry_00318814_0x318814(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00318814_0x318814");
#endif

    ctx->pc = 0x318814u;

    // 0x318814: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x318814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x318818: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x318818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31881c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x31881cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318820: 0xe44012d0  swc1        $f0, 0x12D0($v0)
    ctx->pc = 0x318820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4816), bits); }
    // 0x318824: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x318824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x318828: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x318828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31882c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x31882cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318830: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x318830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x318834: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x318834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318838: 0xac40128c  sw          $zero, 0x128C($v0)
    ctx->pc = 0x318838u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4748), GPR_U32(ctx, 0));
    // 0x31883c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x31883cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318840: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x318840u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x318844: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x318844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x318848: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x318848u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x31884cu;
}
