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

// Function: entry_0012d76c
// Address: 0x12d76c - 0x12d830
void entry_0012d76c_0x12d76c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d76c_0x12d76c");
#endif

    switch (ctx->pc) {
        case 0x12d790u: goto label_12d790;
        case 0x12d7b8u: goto label_12d7b8;
        case 0x12d7d0u: goto label_12d7d0;
        case 0x12d7e8u: goto label_12d7e8;
        case 0x12d7fcu: goto label_12d7fc;
        case 0x12d820u: goto label_12d820;
        default: break;
    }

    ctx->pc = 0x12d76cu;

    // 0x12d76c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12d76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d770: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x12d770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12d774: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x12d774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x12d778: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x12d778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x12d77c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12d77cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12d780: 0x0  nop
    ctx->pc = 0x12d780u;
    // NOP
    // 0x12d784: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x12d784u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12d788: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x12D788u;
    SET_GPR_U32(ctx, 31, 0x12D790u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x12D788u, 0x12D790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D790u;
label_12d790:
    // 0x12d790: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12d790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d794: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x12d794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x12d798: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12d798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d79c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12d79cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d7a0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12d7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12d7a4: 0x24060104  addiu       $a2, $zero, 0x104
    ctx->pc = 0x12d7a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x12d7a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12d7a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d7ac: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12d7acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12d7b0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12D7B0u;
    SET_GPR_U32(ctx, 31, 0x12D7B8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12D7B0u, 0x12D7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D7B8u;
label_12d7b8:
    // 0x12d7b8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x12d7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x12d7bc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x12d7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x12d7c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12d7c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12d7c4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x12d7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12d7c8: 0xc067844  jal         func_19E110
    ctx->pc = 0x12D7C8u;
    SET_GPR_U32(ctx, 31, 0x12D7D0u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x12D7C8u, 0x12D7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D7D0u;
label_12d7d0:
    // 0x12d7d0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12d7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d7d4: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x12d7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x12d7d8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x12d7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x12d7dc: 0x244500b0  addiu       $a1, $v0, 0xB0
    ctx->pc = 0x12d7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x12d7e0: 0xc040c9e  jal         func_103278
    ctx->pc = 0x12D7E0u;
    SET_GPR_U32(ctx, 31, 0x12D7E8u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x12D7E8u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x12D7E8u) { return; }
    ctx->pc = 0x12D7E8u;
label_12d7e8:
    // 0x12d7e8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12d7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d7ec: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x12d7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x12d7f0: 0x244400b0  addiu       $a0, $v0, 0xB0
    ctx->pc = 0x12d7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x12d7f4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x12D7F4u;
    SET_GPR_U32(ctx, 31, 0x12D7FCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x12D7F4u, 0x12D7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D7FCu;
label_12d7fc:
    // 0x12d7fc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12d7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d800: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x12d800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x12d804: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12d804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d808: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x12d808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x12d80c: 0x24640080  addiu       $a0, $v1, 0x80
    ctx->pc = 0x12d80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x12d810: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x12d810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12d814: 0x24460080  addiu       $a2, $v0, 0x80
    ctx->pc = 0x12d814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x12d818: 0xc040c00  jal         func_103000
    ctx->pc = 0x12D818u;
    SET_GPR_U32(ctx, 31, 0x12D820u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x12D820u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x12D820u) { return; }
    ctx->pc = 0x12D820u;
label_12d820:
    // 0x12d820: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12d820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d824: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x12d824u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12d828: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12d828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12d82c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x12d82cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12d830u;
}
