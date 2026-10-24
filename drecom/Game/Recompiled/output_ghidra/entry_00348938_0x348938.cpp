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

// Function: entry_00348938
// Address: 0x348938 - 0x348a68
void entry_00348938_0x348938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00348938_0x348938");
#endif

    switch (ctx->pc) {
        case 0x3489c4u: goto label_3489c4;
        case 0x348a44u: goto label_348a44;
        case 0x348a4cu: goto label_348a4c;
        default: break;
    }

    ctx->pc = 0x348938u;

    // 0x348938: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x348938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x34893c: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x34893cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x348940: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x348940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x348944: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x348944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x348948: 0x10600075  beqz        $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x348948u;
    {
        const bool branch_taken_0x348948 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x348948) {
            ctx->pc = 0x348B20u;
            return;
        }
    }
    ctx->pc = 0x348950u;
    // 0x348950: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348954: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x348954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x348958: 0x244202c0  addiu       $v0, $v0, 0x2C0
    ctx->pc = 0x348958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
    // 0x34895c: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x34895cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x348960: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x348960u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348964: 0x0  nop
    ctx->pc = 0x348964u;
    // NOP
    // 0x348968: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x348968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x34896c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34896cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348970: 0x0  nop
    ctx->pc = 0x348970u;
    // NOP
    // 0x348974: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x348974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x348978: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x348978u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34897c: 0x0  nop
    ctx->pc = 0x34897cu;
    // NOP
    // 0x348980: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x348980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x348984: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x348984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x348988: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x348988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34898c: 0x0  nop
    ctx->pc = 0x34898cu;
    // NOP
    // 0x348990: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x348990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x348994: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x348994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x348998: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x348998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34899c: 0x0  nop
    ctx->pc = 0x34899cu;
    // NOP
    // 0x3489a0: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x3489a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x3489a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3489a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3489a8: 0xa7a200a4  sh          $v0, 0xA4($sp)
    ctx->pc = 0x3489a8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 164), (uint16_t)GPR_U32(ctx, 2));
    // 0x3489ac: 0xa3a000a6  sb          $zero, 0xA6($sp)
    ctx->pc = 0x3489acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 166), (uint8_t)GPR_U32(ctx, 0));
    // 0x3489b0: 0xa3a000a7  sb          $zero, 0xA7($sp)
    ctx->pc = 0x3489b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 167), (uint8_t)GPR_U32(ctx, 0));
    // 0x3489b4: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x3489b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x3489b8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3489b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3489bc: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x3489BCu;
    SET_GPR_U32(ctx, 31, 0x3489C4u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x3489BCu, 0x3489C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3489C4u;
label_3489c4:
    // 0x3489c4: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x3489C4u;
    {
        const bool branch_taken_0x3489c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3489c4) {
            ctx->pc = 0x348B20u;
            return;
        }
    }
    ctx->pc = 0x3489CCu;
    // 0x3489cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3489ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3489d0: 0x0  nop
    ctx->pc = 0x3489d0u;
    // NOP
    // 0x3489d4: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x3489d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x3489d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3489d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3489dc: 0x0  nop
    ctx->pc = 0x3489dcu;
    // NOP
    // 0x3489e0: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x3489e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x3489e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3489e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3489e8: 0x0  nop
    ctx->pc = 0x3489e8u;
    // NOP
    // 0x3489ec: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x3489ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x3489f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3489f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3489f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3489f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3489f8: 0x0  nop
    ctx->pc = 0x3489f8u;
    // NOP
    // 0x3489fc: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x3489fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x348a00: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348a04: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x348a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x348a08: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x348a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x348a0c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x348a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x348a10: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x348a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x348a14: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x348a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x348a18: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x348a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x348a1c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x348a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x348a20: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x348a20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x348a24: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348a28: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x348a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x348a2c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x348a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x348a30: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x348a30u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x348a34: 0x24470340  addiu       $a3, $v0, 0x340
    ctx->pc = 0x348a34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 832));
    // 0x348a38: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x348a38u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x348a3c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x348A3Cu;
    SET_GPR_U32(ctx, 31, 0x348A44u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x348A3Cu, 0x348A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348A44u;
label_348a44:
    // 0x348a44: 0xc067694  jal         func_19DA50
    ctx->pc = 0x348A44u;
    SET_GPR_U32(ctx, 31, 0x348A4Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x348A44u, 0x348A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348A4Cu;
label_348a4c:
    // 0x348a4c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x348A4Cu;
    {
        const bool branch_taken_0x348a4c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x348a4c) {
            ctx->pc = 0x348A68u;
            return;
        }
    }
    ctx->pc = 0x348A54u;
    // 0x348a54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x348a54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348a58: 0x0  nop
    ctx->pc = 0x348a58u;
    // NOP
    // 0x348a5c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x348a5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x348a60: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x348A60u;
    {
        const bool branch_taken_0x348a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x348a60) {
            ctx->pc = 0x348A84u;
            return;
        }
    }
    ctx->pc = 0x348A68u;
}
