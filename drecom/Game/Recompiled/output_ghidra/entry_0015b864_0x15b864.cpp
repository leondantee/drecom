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

// Function: entry_0015b864
// Address: 0x15b864 - 0x15b8e4
void entry_0015b864_0x15b864(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b864_0x15b864");
#endif

    switch (ctx->pc) {
        case 0x15b874u: goto label_15b874;
        case 0x15b88cu: goto label_15b88c;
        case 0x15b8a0u: goto label_15b8a0;
        case 0x15b8dcu: goto label_15b8dc;
        default: break;
    }

    ctx->pc = 0x15b864u;

    // 0x15b864: 0xc7ac0080  lwc1        $f12, 0x80($sp)
    ctx->pc = 0x15b864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15b868: 0xc7ad0084  lwc1        $f13, 0x84($sp)
    ctx->pc = 0x15b868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x15b86c: 0xc0455e6  jal         func_115798
    ctx->pc = 0x15B86Cu;
    SET_GPR_U32(ctx, 31, 0x15B874u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x15B86Cu, 0x15B874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B874u;
label_15b874:
    // 0x15b874: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x15b874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x15b878: 0xc60113e0  lwc1        $f1, 0x13E0($s0)
    ctx->pc = 0x15b878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b87c: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x15b87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b880: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x15b880u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15b884: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x15B884u;
    SET_GPR_U32(ctx, 31, 0x15B88Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x15B884u, 0x15B88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B88Cu;
label_15b88c:
    // 0x15b88c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x15b88cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x15b890: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x15b890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15b894: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x15b894u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15b898: 0xc056f24  jal         func_15BC90
    ctx->pc = 0x15B898u;
    SET_GPR_U32(ctx, 31, 0x15B8A0u);
    ctx->pc = 0x15BC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BC90u, 0x15B898u, 0x15B8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B8A0u;
label_15b8a0:
    // 0x15b8a0: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x15B8A0u;
    {
        const bool branch_taken_0x15b8a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b8a0) {
            ctx->pc = 0x15BA44u;
            return;
        }
    }
    ctx->pc = 0x15B8A8u;
    // 0x15b8a8: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x15b8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x15b8ac: 0xa2021920  sb          $v0, 0x1920($s0)
    ctx->pc = 0x15b8acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6432), (uint8_t)GPR_U32(ctx, 2));
    // 0x15b8b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b8b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15b8b4: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x15b8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x15b8b8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15b8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15b8bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b8bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15b8c0: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x15b8c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x15b8c4: 0x8e0213ec  lw          $v0, 0x13EC($s0)
    ctx->pc = 0x15b8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5100)));
    // 0x15b8c8: 0xae0213e8  sw          $v0, 0x13E8($s0)
    ctx->pc = 0x15b8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5096), GPR_U32(ctx, 2));
    // 0x15b8cc: 0xa6001574  sh          $zero, 0x1574($s0)
    ctx->pc = 0x15b8ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5492), (uint16_t)GPR_U32(ctx, 0));
    // 0x15b8d0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15b8d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15b8d4: 0xc0571d0  jal         func_15C740
    ctx->pc = 0x15B8D4u;
    SET_GPR_U32(ctx, 31, 0x15B8DCu);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x15B8D4u, 0x15B8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B8DCu;
label_15b8dc:
    // 0x15b8dc: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x15B8DCu;
    {
        const bool branch_taken_0x15b8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b8dc) {
            ctx->pc = 0x15BC5Cu;
            return;
        }
    }
    ctx->pc = 0x15B8E4u;
}
