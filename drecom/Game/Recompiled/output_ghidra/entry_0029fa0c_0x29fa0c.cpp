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

// Function: entry_0029fa0c
// Address: 0x29fa0c - 0x29fb88
void entry_0029fa0c_0x29fa0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029fa0c_0x29fa0c");
#endif

    switch (ctx->pc) {
        case 0x29fa1cu: goto label_29fa1c;
        case 0x29fa28u: goto label_29fa28;
        case 0x29fa38u: goto label_29fa38;
        case 0x29fa44u: goto label_29fa44;
        case 0x29fa50u: goto label_29fa50;
        case 0x29fa74u: goto label_29fa74;
        case 0x29faa8u: goto label_29faa8;
        case 0x29faf0u: goto label_29faf0;
        case 0x29fb10u: goto label_29fb10;
        case 0x29fb58u: goto label_29fb58;
        case 0x29fb6cu: goto label_29fb6c;
        default: break;
    }

    ctx->pc = 0x29fa0cu;

    // 0x29fa0c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29fa0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fa10: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x29fa10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29fa14: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x29FA14u;
    SET_GPR_U32(ctx, 31, 0x29FA1Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x29FA14u, 0x29FA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FA1Cu;
label_29fa1c:
    // 0x29fa1c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29fa1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fa20: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x29FA20u;
    SET_GPR_U32(ctx, 31, 0x29FA28u);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x29FA20u, 0x29FA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FA28u;
label_29fa28:
    // 0x29fa28: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29fa28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fa2c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x29fa2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29fa30: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x29FA30u;
    SET_GPR_U32(ctx, 31, 0x29FA38u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x29FA30u, 0x29FA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FA38u;
label_29fa38:
    // 0x29fa38: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29fa38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fa3c: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x29FA3Cu;
    SET_GPR_U32(ctx, 31, 0x29FA44u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x29FA3Cu, 0x29FA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FA44u;
label_29fa44:
    // 0x29fa44: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29fa44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fa48: 0xc0aa354  jal         func_2A8D50
    ctx->pc = 0x29FA48u;
    SET_GPR_U32(ctx, 31, 0x29FA50u);
    ctx->pc = 0x2A8D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8D50u, 0x29FA48u, 0x29FA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FA50u;
label_29fa50:
    // 0x29fa50: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29fa50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fa54: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x29fa54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x29fa58: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x29fa58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x29fa5c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x29fa5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x29fa60: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x29FA60u;
    {
        const bool branch_taken_0x29fa60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fa60) {
            ctx->pc = 0x29FB88u;
            return;
        }
    }
    ctx->pc = 0x29FA68u;
    // 0x29fa68: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x29fa68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29fa6c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x29FA6Cu;
    SET_GPR_U32(ctx, 31, 0x29FA74u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x29FA6Cu, 0x29FA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FA74u;
label_29fa74:
    // 0x29fa74: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29fa74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fa78: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x29fa78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x29fa7c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x29fa7cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29fa80: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x29fa80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29fa84: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x29fa84u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x29fa88: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x29fa88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29fa8c: 0x3c023edf  lui         $v0, 0x3EDF
    ctx->pc = 0x29fa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16095 << 16));
    // 0x29fa90: 0x344266f3  ori         $v0, $v0, 0x66F3
    ctx->pc = 0x29fa90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26355);
    // 0x29fa94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29fa94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29fa98: 0x0  nop
    ctx->pc = 0x29fa98u;
    // NOP
    // 0x29fa9c: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x29fa9cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29faa0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x29FAA0u;
    SET_GPR_U32(ctx, 31, 0x29FAA8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x29FAA0u, 0x29FAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FAA8u;
label_29faa8:
    // 0x29faa8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x29faa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x29faac: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29faacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fab0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x29fab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29fab4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x29fab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x29fab8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x29fab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29fabc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x29fabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x29fac0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x29fac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x29fac4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x29fac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x29fac8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29fac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29facc: 0x34440007  ori         $a0, $v0, 0x7
    ctx->pc = 0x29faccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x29fad0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29fad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fad4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x29fad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x29fad8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x29fad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29fadc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x29fadcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29fae0: 0x24470080  addiu       $a3, $v0, 0x80
    ctx->pc = 0x29fae0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x29fae4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x29fae4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29fae8: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x29FAE8u;
    SET_GPR_U32(ctx, 31, 0x29FAF0u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x29FAE8u, 0x29FAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FAF0u;
label_29faf0:
    // 0x29faf0: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x29faf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29faf4: 0x3c023e32  lui         $v0, 0x3E32
    ctx->pc = 0x29faf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
    // 0x29faf8: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x29faf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x29fafc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29fafcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29fb00: 0x0  nop
    ctx->pc = 0x29fb00u;
    // NOP
    // 0x29fb04: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x29fb04u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29fb08: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x29FB08u;
    SET_GPR_U32(ctx, 31, 0x29FB10u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x29FB08u, 0x29FB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FB10u;
label_29fb10:
    // 0x29fb10: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x29fb10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x29fb14: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29fb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fb18: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x29fb18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29fb1c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x29fb1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x29fb20: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x29fb20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29fb24: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x29fb24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x29fb28: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x29fb28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x29fb2c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x29fb2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x29fb30: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29fb30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29fb34: 0x34440007  ori         $a0, $v0, 0x7
    ctx->pc = 0x29fb34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x29fb38: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29fb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fb3c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x29fb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x29fb40: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x29fb40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29fb44: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x29fb44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29fb48: 0x24470080  addiu       $a3, $v0, 0x80
    ctx->pc = 0x29fb48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x29fb4c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x29fb4cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29fb50: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x29FB50u;
    SET_GPR_U32(ctx, 31, 0x29FB58u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x29FB50u, 0x29FB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FB58u;
label_29fb58:
    // 0x29fb58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29fb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29fb5c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29fb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fb60: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x29fb60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x29fb64: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29FB64u;
    SET_GPR_U32(ctx, 31, 0x29FB6Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29FB64u, 0x29FB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FB6Cu;
label_29fb6c:
    // 0x29fb6c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x29fb6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29fb70: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x29fb70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x29fb74: 0x2463012c  addiu       $v1, $v1, 0x12C
    ctx->pc = 0x29fb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 300));
    // 0x29fb78: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x29fb78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x29fb7c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29fb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fb80: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29fb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29fb84: 0xa4640042  sh          $a0, 0x42($v1)
    ctx->pc = 0x29fb84u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 66), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x29fb88u;
}
