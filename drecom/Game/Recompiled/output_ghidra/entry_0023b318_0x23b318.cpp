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

// Function: entry_0023b318
// Address: 0x23b318 - 0x23b3ac
void entry_0023b318_0x23b318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023b318_0x23b318");
#endif

    switch (ctx->pc) {
        case 0x23b358u: goto label_23b358;
        case 0x23b384u: goto label_23b384;
        default: break;
    }

    ctx->pc = 0x23b318u;

    // 0x23b318: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23b318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b31c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x23b31cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x23b320: 0x10600129  beqz        $v1, . + 4 + (0x129 << 2)
    ctx->pc = 0x23B320u;
    {
        const bool branch_taken_0x23b320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b320) {
            ctx->pc = 0x23B7C8u;
            return;
        }
    }
    ctx->pc = 0x23B328u;
    // 0x23b328: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x23b328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b32c: 0x8483127c  lh          $v1, 0x127C($a0)
    ctx->pc = 0x23b32cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4732)));
    // 0x23b330: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23b330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x23b334: 0xa483127c  sh          $v1, 0x127C($a0)
    ctx->pc = 0x23b334u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x23b338: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23b338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b33c: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x23b33cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x23b340: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x23b340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x23b344: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x23b344u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x23b348: 0x1060011f  beqz        $v1, . + 4 + (0x11F << 2)
    ctx->pc = 0x23B348u;
    {
        const bool branch_taken_0x23b348 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b348) {
            ctx->pc = 0x23B7C8u;
            return;
        }
    }
    ctx->pc = 0x23B350u;
    // 0x23b350: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23B350u;
    SET_GPR_U32(ctx, 31, 0x23B358u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23B350u, 0x23B358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B358u;
label_23b358:
    // 0x23b358: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23b358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23b35c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23b35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23b360: 0x24420022  addiu       $v0, $v0, 0x22
    ctx->pc = 0x23b360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 34));
    // 0x23b364: 0x34462800  ori         $a2, $v0, 0x2800
    ctx->pc = 0x23b364u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10240);
    // 0x23b368: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23b368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b36c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x23b36cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b370: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x23b370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x23b374: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23b374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b378: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23b378u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23b37c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23B37Cu;
    SET_GPR_U32(ctx, 31, 0x23B384u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23B37Cu, 0x23B384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B384u;
label_23b384:
    // 0x23b384: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x23b384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23b388: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23b388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b38c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x23b38cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x23b390: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x23b390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x23b394: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23b394u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b398: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23b398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b39c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23b39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23b3a0: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x23b3a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x23b3a4: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x23B3A4u;
    {
        const bool branch_taken_0x23b3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b3a4) {
            ctx->pc = 0x23B7C8u;
            return;
        }
    }
    ctx->pc = 0x23B3ACu;
}
