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

// Function: entry_00166ba4
// Address: 0x166ba4 - 0x166c28
void entry_00166ba4_0x166ba4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00166ba4_0x166ba4");
#endif

    switch (ctx->pc) {
        case 0x166bd0u: goto label_166bd0;
        case 0x166be8u: goto label_166be8;
        case 0x166c00u: goto label_166c00;
        case 0x166c18u: goto label_166c18;
        default: break;
    }

    ctx->pc = 0x166ba4u;

    // 0x166ba4: 0x3c0201f0  lui         $v0, 0x1F0
    ctx->pc = 0x166ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)496 << 16));
    // 0x166ba8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x166ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x166bac: 0xac220aec  sw          $v0, 0xAEC($at)
    ctx->pc = 0x166bacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AECu, _value); } while (0);
    // 0x166bb0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x166bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x166bb4: 0xac205488  sw          $zero, 0x5488($at)
    ctx->pc = 0x166bb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F5488u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5488u, _value); } while (0);
    // 0x166bb8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x166bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x166bbc: 0xac205480  sw          $zero, 0x5480($at)
    ctx->pc = 0x166bbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F5480u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5480u, _value); } while (0);
    // 0x166bc0: 0x24041000  addiu       $a0, $zero, 0x1000
    ctx->pc = 0x166bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x166bc4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x166bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x166bc8: 0xc0593a8  jal         func_164EA0
    ctx->pc = 0x166BC8u;
    SET_GPR_U32(ctx, 31, 0x166BD0u);
    ctx->pc = 0x164EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164EA0u, 0x166BC8u, 0x166BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166BD0u;
label_166bd0:
    // 0x166bd0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x166bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x166bd4: 0xac22fdf4  sw          $v0, -0x20C($at)
    ctx->pc = 0x166bd4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CFDF4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CFDF4u, _value); } while (0);
    // 0x166bd8: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x166bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x166bdc: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x166bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x166be0: 0xc0593a8  jal         func_164EA0
    ctx->pc = 0x166BE0u;
    SET_GPR_U32(ctx, 31, 0x166BE8u);
    ctx->pc = 0x164EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164EA0u, 0x166BE0u, 0x166BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166BE8u;
label_166be8:
    // 0x166be8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x166be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x166bec: 0xac22fe04  sw          $v0, -0x1FC($at)
    ctx->pc = 0x166becu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CFE04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CFE04u, _value); } while (0);
    // 0x166bf0: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x166bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x166bf4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x166bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x166bf8: 0xc0593a8  jal         func_164EA0
    ctx->pc = 0x166BF8u;
    SET_GPR_U32(ctx, 31, 0x166C00u);
    ctx->pc = 0x164EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164EA0u, 0x166BF8u, 0x166C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166C00u;
label_166c00:
    // 0x166c00: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x166c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x166c04: 0xac22fdfc  sw          $v0, -0x204($at)
    ctx->pc = 0x166c04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CFDFCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CFDFCu, _value); } while (0);
    // 0x166c08: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x166c08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x166c0c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x166c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x166c10: 0xc0593a8  jal         func_164EA0
    ctx->pc = 0x166C10u;
    SET_GPR_U32(ctx, 31, 0x166C18u);
    ctx->pc = 0x164EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164EA0u, 0x166C10u, 0x166C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166C18u;
label_166c18:
    // 0x166c18: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x166c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x166c1c: 0xac22fdf0  sw          $v0, -0x210($at)
    ctx->pc = 0x166c1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CFDF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CFDF0u, _value); } while (0);
    // 0x166c20: 0x3c04000e  lui         $a0, 0xE
    ctx->pc = 0x166c20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14 << 16));
    // 0x166c24: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x166c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x166c28u;
}
