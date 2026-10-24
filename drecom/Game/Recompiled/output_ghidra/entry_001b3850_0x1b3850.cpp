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

// Function: entry_001b3850
// Address: 0x1b3850 - 0x1b38cc
void entry_001b3850_0x1b3850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3850_0x1b3850");
#endif

    switch (ctx->pc) {
        case 0x1b386cu: goto label_1b386c;
        default: break;
    }

    ctx->pc = 0x1b3850u;

    // 0x1b3850: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1b3850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1b3854: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b3854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1b3858: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b3858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b385c: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x1b385cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3860: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1b3860u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b3864: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1B3864u;
    SET_GPR_U32(ctx, 31, 0x1B386Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1B3864u, 0x1B386Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B386Cu;
label_1b386c:
    // 0x1b386c: 0xe60011f8  swc1        $f0, 0x11F8($s0)
    ctx->pc = 0x1b386cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4600), bits); }
    // 0x1b3870: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b3870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b3874: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x1b3874u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x1b3878: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b3878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b387c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1b387cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b3880: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1b3880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1b3884: 0x24428fc0  addiu       $v0, $v0, -0x7040
    ctx->pc = 0x1b3884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938560));
    // 0x1b3888: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b3888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b388c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1b388cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3890: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1b3890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b3894: 0xa20211ee  sb          $v0, 0x11EE($s0)
    ctx->pc = 0x1b3894u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4590), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b3898: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b3898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b389c: 0xa20211ef  sb          $v0, 0x11EF($s0)
    ctx->pc = 0x1b389cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4591), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b38a0: 0xa60011f4  sh          $zero, 0x11F4($s0)
    ctx->pc = 0x1b38a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4596), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b38a4: 0xa60011f2  sh          $zero, 0x11F2($s0)
    ctx->pc = 0x1b38a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4594), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b38a8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1b38a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1b38ac: 0x9442001a  lhu         $v0, 0x1A($v0)
    ctx->pc = 0x1b38acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 26)));
    // 0x1b38b0: 0xa60211f6  sh          $v0, 0x11F6($s0)
    ctx->pc = 0x1b38b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4598), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b38b4: 0xa20011f0  sb          $zero, 0x11F0($s0)
    ctx->pc = 0x1b38b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4592), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b38b8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b38b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b38bc: 0xae021210  sw          $v0, 0x1210($s0)
    ctx->pc = 0x1b38bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4624), GPR_U32(ctx, 2));
    // 0x1b38c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b38c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b38c4: 0xa20210a8  sb          $v0, 0x10A8($s0)
    ctx->pc = 0x1b38c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b38c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b38c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x1b38ccu;
}
