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

// Function: entry_002dda00
// Address: 0x2dda00 - 0x2ddaa8
void entry_002dda00_0x2dda00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dda00_0x2dda00");
#endif

    switch (ctx->pc) {
        case 0x2dda34u: goto label_2dda34;
        case 0x2dda80u: goto label_2dda80;
        case 0x2ddaa0u: goto label_2ddaa0;
        default: break;
    }

    ctx->pc = 0x2dda00u;

    // 0x2dda00: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2dda00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dda04: 0x94a309e0  lhu         $v1, 0x9E0($a1)
    ctx->pc = 0x2dda04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2528)));
    // 0x2dda08: 0x3064feff  andi        $a0, $v1, 0xFEFF
    ctx->pc = 0x2dda08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65279);
    // 0x2dda0c: 0xa4a409e0  sh          $a0, 0x9E0($a1)
    ctx->pc = 0x2dda0cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2528), (uint16_t)GPR_U32(ctx, 4));
    // 0x2dda10: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dda10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dda14: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x2dda14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x2dda18: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2dda18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2dda1c: 0x30a30080  andi        $v1, $a1, 0x80
    ctx->pc = 0x2dda1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x2dda20: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x2DDA20u;
    {
        const bool branch_taken_0x2dda20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dda20) {
            ctx->pc = 0x2DDB18u;
            return;
        }
    }
    ctx->pc = 0x2DDA28u;
    // 0x2dda28: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2dda28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dda2c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2DDA2Cu;
    SET_GPR_U32(ctx, 31, 0x2DDA34u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2DDA2Cu, 0x2DDA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDA34u;
label_2dda34:
    // 0x2dda34: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2dda34u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2dda38: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dda38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dda3c: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x2dda3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x2dda40: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2DDA40u;
    {
        const bool branch_taken_0x2dda40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dda40) {
            ctx->pc = 0x2DDAA8u;
            return;
        }
    }
    ctx->pc = 0x2DDA48u;
    // 0x2dda48: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x2dda48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x2dda4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2dda4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dda50: 0x0  nop
    ctx->pc = 0x2dda50u;
    // NOP
    // 0x2dda54: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2dda54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2dda58: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dda58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dda5c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dda5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dda60: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x2dda60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x2dda64: 0x246503c0  addiu       $a1, $v1, 0x3C0
    ctx->pc = 0x2dda64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 960));
    // 0x2dda68: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x2dda68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dda6c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2dda6cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2dda70: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2dda70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x2dda74: 0x24678e00  addiu       $a3, $v1, -0x7200
    ctx->pc = 0x2dda74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938112));
    // 0x2dda78: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2DDA78u;
    SET_GPR_U32(ctx, 31, 0x2DDA80u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2DDA78u, 0x2DDA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDA80u;
label_2dda80:
    // 0x2dda80: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2dda80u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2dda84: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DDA84u;
    {
        const bool branch_taken_0x2dda84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dda84) {
            ctx->pc = 0x2DDAA8u;
            return;
        }
    }
    ctx->pc = 0x2DDA8Cu;
    // 0x2dda8c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2dda8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2dda90: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dda90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dda94: 0xa444127a  sh          $a0, 0x127A($v0)
    ctx->pc = 0x2dda94u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x2dda98: 0xc0b6534  jal         func_2D94D0
    ctx->pc = 0x2DDA98u;
    SET_GPR_U32(ctx, 31, 0x2DDAA0u);
    ctx->pc = 0x2D94D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D94D0u, 0x2DDA98u, 0x2DDAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDAA0u;
label_2ddaa0:
    // 0x2ddaa0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2ddaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ddaa4: 0xa4a0127e  sh          $zero, 0x127E($a1)
    ctx->pc = 0x2ddaa4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4734), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x2ddaa8u;
}
