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

// Function: entry_00229dbc
// Address: 0x229dbc - 0x229e28
void entry_00229dbc_0x229dbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00229dbc_0x229dbc");
#endif

    switch (ctx->pc) {
        case 0x229de8u: goto label_229de8;
        case 0x229e04u: goto label_229e04;
        case 0x229e1cu: goto label_229e1c;
        default: break;
    }

    ctx->pc = 0x229dbcu;

    // 0x229dbc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x229dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229dc0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x229dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229dc4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x229dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229dc8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x229dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229dcc: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x229dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x229dd0: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x229dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x229dd4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x229dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x229dd8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x229dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x229ddc: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x229ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x229de0: 0xc05c848  jal         func_172120
    ctx->pc = 0x229DE0u;
    SET_GPR_U32(ctx, 31, 0x229DE8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x229DE0u, 0x229DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229DE8u;
label_229de8:
    // 0x229de8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x229de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x229dec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x229decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229df0: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x229df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229df4: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x229df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229df8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x229df8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x229dfc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x229DFCu;
    SET_GPR_U32(ctx, 31, 0x229E04u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x229DFCu, 0x229E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229E04u;
label_229e04:
    // 0x229e04: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x229e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229e08: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x229e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x229e0c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x229e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229e10: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x229e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x229e14: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x229E14u;
    SET_GPR_U32(ctx, 31, 0x229E1Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x229E14u, 0x229E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229E1Cu;
label_229e1c:
    // 0x229e1c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x229e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229e20: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x229E20u;
    SET_GPR_U32(ctx, 31, 0x229E28u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x229E20u, 0x229E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229E28u;
}
