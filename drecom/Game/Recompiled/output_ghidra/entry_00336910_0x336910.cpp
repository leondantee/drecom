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

// Function: entry_00336910
// Address: 0x336910 - 0x336aac
void entry_00336910_0x336910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00336910_0x336910");
#endif

    switch (ctx->pc) {
        case 0x3369dcu: goto label_3369dc;
        case 0x336a88u: goto label_336a88;
        default: break;
    }

    ctx->pc = 0x336910u;

    // 0x336910: 0x261161d4  addiu       $s1, $s0, 0x61D4
    ctx->pc = 0x336910u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 25044));
    // 0x336914: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x336914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x336918: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x336918u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x33691c: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x33691cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x336920: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x336920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336924: 0x0  nop
    ctx->pc = 0x336924u;
    // NOP
    // 0x336928: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x336928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x33692c: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x33692cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x336930: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x336930u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336934: 0x0  nop
    ctx->pc = 0x336934u;
    // NOP
    // 0x336938: 0xe6200084  swc1        $f0, 0x84($s1)
    ctx->pc = 0x336938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
    // 0x33693c: 0x3c0243c0  lui         $v0, 0x43C0
    ctx->pc = 0x33693cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17344 << 16));
    // 0x336940: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x336940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336944: 0x0  nop
    ctx->pc = 0x336944u;
    // NOP
    // 0x336948: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x336948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
    // 0x33694c: 0x3c024260  lui         $v0, 0x4260
    ctx->pc = 0x33694cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16992 << 16));
    // 0x336950: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x336950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336954: 0x0  nop
    ctx->pc = 0x336954u;
    // NOP
    // 0x336958: 0xe6200088  swc1        $f0, 0x88($s1)
    ctx->pc = 0x336958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
    // 0x33695c: 0x3c0242e0  lui         $v0, 0x42E0
    ctx->pc = 0x33695cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17120 << 16));
    // 0x336960: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x336960u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336964: 0x0  nop
    ctx->pc = 0x336964u;
    // NOP
    // 0x336968: 0xe620004c  swc1        $f0, 0x4C($s1)
    ctx->pc = 0x336968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x33696c: 0x3c024340  lui         $v0, 0x4340
    ctx->pc = 0x33696cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17216 << 16));
    // 0x336970: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x336970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336974: 0x0  nop
    ctx->pc = 0x336974u;
    // NOP
    // 0x336978: 0xe620008c  swc1        $f0, 0x8C($s1)
    ctx->pc = 0x336978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
    // 0x33697c: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x33697cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x336980: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x336980u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336984: 0x0  nop
    ctx->pc = 0x336984u;
    // NOP
    // 0x336988: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x336988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x33698c: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x33698cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x336990: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x336990u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336994: 0x0  nop
    ctx->pc = 0x336994u;
    // NOP
    // 0x336998: 0xe6200090  swc1        $f0, 0x90($s1)
    ctx->pc = 0x336998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
    // 0x33699c: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x33699cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x3369a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3369a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3369a4: 0x0  nop
    ctx->pc = 0x3369a4u;
    // NOP
    // 0x3369a8: 0xe6200054  swc1        $f0, 0x54($s1)
    ctx->pc = 0x3369a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
    // 0x3369ac: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x3369acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x3369b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3369b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3369b4: 0x0  nop
    ctx->pc = 0x3369b4u;
    // NOP
    // 0x3369b8: 0xe6200094  swc1        $f0, 0x94($s1)
    ctx->pc = 0x3369b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
    // 0x3369bc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3369bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3369c0: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x3369c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x3369c4: 0x26260044  addiu       $a2, $s1, 0x44
    ctx->pc = 0x3369c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x3369c8: 0x26270084  addiu       $a3, $s1, 0x84
    ctx->pc = 0x3369c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
    // 0x3369cc: 0x262800c4  addiu       $t0, $s1, 0xC4
    ctx->pc = 0x3369ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    // 0x3369d0: 0x26290104  addiu       $t1, $s1, 0x104
    ctx->pc = 0x3369d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
    // 0x3369d4: 0xc0a43e0  jal         func_290F80
    ctx->pc = 0x3369D4u;
    SET_GPR_U32(ctx, 31, 0x3369DCu);
    ctx->pc = 0x290F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F80u, 0x3369D4u, 0x3369DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3369DCu;
label_3369dc:
    // 0x3369dc: 0x26116318  addiu       $s1, $s0, 0x6318
    ctx->pc = 0x3369dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 25368));
    // 0x3369e0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3369e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3369e4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3369e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x3369e8: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x3369e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x3369ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3369ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3369f0: 0x0  nop
    ctx->pc = 0x3369f0u;
    // NOP
    // 0x3369f4: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x3369f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x3369f8: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x3369f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x3369fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3369fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336a00: 0x0  nop
    ctx->pc = 0x336a00u;
    // NOP
    // 0x336a04: 0xe6200084  swc1        $f0, 0x84($s1)
    ctx->pc = 0x336a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
    // 0x336a08: 0x3c0243c0  lui         $v0, 0x43C0
    ctx->pc = 0x336a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17344 << 16));
    // 0x336a0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x336a0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336a10: 0x0  nop
    ctx->pc = 0x336a10u;
    // NOP
    // 0x336a14: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x336a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
    // 0x336a18: 0x3c02438c  lui         $v0, 0x438C
    ctx->pc = 0x336a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17292 << 16));
    // 0x336a1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x336a1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336a20: 0x0  nop
    ctx->pc = 0x336a20u;
    // NOP
    // 0x336a24: 0xe6200088  swc1        $f0, 0x88($s1)
    ctx->pc = 0x336a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
    // 0x336a28: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x336a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
    // 0x336a2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x336a2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336a30: 0x0  nop
    ctx->pc = 0x336a30u;
    // NOP
    // 0x336a34: 0xe620004c  swc1        $f0, 0x4C($s1)
    ctx->pc = 0x336a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x336a38: 0x3c0243a8  lui         $v0, 0x43A8
    ctx->pc = 0x336a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17320 << 16));
    // 0x336a3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x336a3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336a40: 0x0  nop
    ctx->pc = 0x336a40u;
    // NOP
    // 0x336a44: 0xe620008c  swc1        $f0, 0x8C($s1)
    ctx->pc = 0x336a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
    // 0x336a48: 0x3c0243d3  lui         $v0, 0x43D3
    ctx->pc = 0x336a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17363 << 16));
    // 0x336a4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x336a4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336a50: 0x0  nop
    ctx->pc = 0x336a50u;
    // NOP
    // 0x336a54: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x336a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x336a58: 0x3c0243d1  lui         $v0, 0x43D1
    ctx->pc = 0x336a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17361 << 16));
    // 0x336a5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x336a5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336a60: 0x0  nop
    ctx->pc = 0x336a60u;
    // NOP
    // 0x336a64: 0xe6200090  swc1        $f0, 0x90($s1)
    ctx->pc = 0x336a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
    // 0x336a68: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x336a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x336a6c: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x336a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x336a70: 0x26260044  addiu       $a2, $s1, 0x44
    ctx->pc = 0x336a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x336a74: 0x26270084  addiu       $a3, $s1, 0x84
    ctx->pc = 0x336a74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
    // 0x336a78: 0x262800c4  addiu       $t0, $s1, 0xC4
    ctx->pc = 0x336a78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    // 0x336a7c: 0x26290104  addiu       $t1, $s1, 0x104
    ctx->pc = 0x336a7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
    // 0x336a80: 0xc0a43e0  jal         func_290F80
    ctx->pc = 0x336A80u;
    SET_GPR_U32(ctx, 31, 0x336A88u);
    ctx->pc = 0x290F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F80u, 0x336A80u, 0x336A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336A88u;
label_336a88:
    // 0x336a88: 0x8e0265a4  lw          $v0, 0x65A4($s0)
    ctx->pc = 0x336a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26020)));
    // 0x336a8c: 0xae0265a0  sw          $v0, 0x65A0($s0)
    ctx->pc = 0x336a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26016), GPR_U32(ctx, 2));
    // 0x336a90: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x336a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x336a94: 0x12620011  beq         $s3, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x336A94u;
    {
        const bool branch_taken_0x336a94 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x336a94) {
            ctx->pc = 0x336ADCu;
            return;
        }
    }
    ctx->pc = 0x336A9Cu;
    // 0x336a9c: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x336A9Cu;
    {
        const bool branch_taken_0x336a9c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x336a9c) {
            ctx->pc = 0x336AACu;
            return;
        }
    }
    ctx->pc = 0x336AA4u;
    // 0x336aa4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x336AA4u;
    {
        const bool branch_taken_0x336aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336aa4) {
            ctx->pc = 0x336B04u;
            return;
        }
    }
    ctx->pc = 0x336AACu;
}
