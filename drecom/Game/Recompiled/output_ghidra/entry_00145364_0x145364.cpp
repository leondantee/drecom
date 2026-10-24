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

// Function: entry_00145364
// Address: 0x145364 - 0x1453d8
void entry_00145364_0x145364(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145364_0x145364");
#endif

    switch (ctx->pc) {
        case 0x145390u: goto label_145390;
        case 0x1453b4u: goto label_1453b4;
        case 0x1453d0u: goto label_1453d0;
        default: break;
    }

    ctx->pc = 0x145364u;

    // 0x145364: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145368: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x145368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14536c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x14536cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x145370: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x145370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x145374: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x145374u;
    {
        const bool branch_taken_0x145374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145374) {
            ctx->pc = 0x1453D8u;
            return;
        }
    }
    ctx->pc = 0x14537Cu;
    // 0x14537c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x14537cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145380: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x145380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x145384: 0xc44c1b34  lwc1        $f12, 0x1B34($v0)
    ctx->pc = 0x145384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x145388: 0xc067844  jal         func_19E110
    ctx->pc = 0x145388u;
    SET_GPR_U32(ctx, 31, 0x145390u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x145388u, 0x145390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145390u;
label_145390:
    // 0x145390: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145394: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x145394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x145398: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x14539c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x14539cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x1453a0: 0x24640080  addiu       $a0, $v1, 0x80
    ctx->pc = 0x1453a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1453a4: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x1453a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1453a8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1453a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1453ac: 0xc040c00  jal         func_103000
    ctx->pc = 0x1453ACu;
    SET_GPR_U32(ctx, 31, 0x1453B4u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x1453B4u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1453B4u) { return; }
    ctx->pc = 0x1453B4u;
label_1453b4:
    // 0x1453b4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1453b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1453b8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1453b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1453bc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1453bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1453c0: 0xc4401b34  lwc1        $f0, 0x1B34($v0)
    ctx->pc = 0x1453c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1453c4: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1453c4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1453c8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1453C8u;
    SET_GPR_U32(ctx, 31, 0x1453D0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1453C8u, 0x1453D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1453D0u;
label_1453d0:
    // 0x1453d0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1453d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1453d4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1453d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    ctx->pc = 0x1453d8u;
}
