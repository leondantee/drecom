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

// Function: Set_effect_pl00_sword_fireset1
// Address: 0x3134d0 - 0x3136a4
void Set_effect_pl00_sword_fireset1_0x3134d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_pl00_sword_fireset1_0x3134d0");
#endif

    switch (ctx->pc) {
        case 0x313500u: goto label_313500;
        case 0x313544u: goto label_313544;
        case 0x313570u: goto label_313570;
        case 0x31359cu: goto label_31359c;
        case 0x3135c8u: goto label_3135c8;
        case 0x313684u: goto label_313684;
        default: break;
    }

    ctx->pc = 0x3134d0u;

    // 0x3134d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3134d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3134d4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x3134d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x3134d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3134d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3134dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3134dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3134e0: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x3134e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x3134e4: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x3134e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x3134e8: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x3134e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3134ec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3134ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3134f0: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x3134f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3134f4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x3134f4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3134f8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x3134F8u;
    SET_GPR_U32(ctx, 31, 0x313500u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3134F8u, 0x313500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313500u;
label_313500:
    // 0x313500: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x313500u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x313504: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x313504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x313508: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x313508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31350c: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x31350Cu;
    {
        const bool branch_taken_0x31350c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x31350c) {
            ctx->pc = 0x3135C0u;
            goto label_3135c0;
        }
    }
    ctx->pc = 0x313514u;
    // 0x313514: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x313514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x313518: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x313518u;
    {
        const bool branch_taken_0x313518 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x313518) {
            ctx->pc = 0x313594u;
            goto label_313594;
        }
    }
    ctx->pc = 0x313520u;
    // 0x313520: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x313520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x313524: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x313524u;
    {
        const bool branch_taken_0x313524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x313524) {
            ctx->pc = 0x313568u;
            goto label_313568;
        }
    }
    ctx->pc = 0x31352Cu;
    // 0x31352c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31352Cu;
    {
        const bool branch_taken_0x31352c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31352c) {
            ctx->pc = 0x31353Cu;
            goto label_31353c;
        }
    }
    ctx->pc = 0x313534u;
    // 0x313534: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x313534u;
    {
        const bool branch_taken_0x313534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x313534) {
            ctx->pc = 0x3135F0u;
            goto label_3135f0;
        }
    }
    ctx->pc = 0x31353Cu;
label_31353c:
    // 0x31353c: 0xc067648  jal         func_19D920
    ctx->pc = 0x31353Cu;
    SET_GPR_U32(ctx, 31, 0x313544u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x31353Cu, 0x313544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313544u;
label_313544:
    // 0x313544: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x313544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x313548: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x313548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31354c: 0x0  nop
    ctx->pc = 0x31354cu;
    // NOP
    // 0x313550: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x313550u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x313554: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x313554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x313558: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x313558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31355c: 0x0  nop
    ctx->pc = 0x31355cu;
    // NOP
    // 0x313560: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x313560u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x313564: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x313564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_313568:
    // 0x313568: 0xc067648  jal         func_19D920
    ctx->pc = 0x313568u;
    SET_GPR_U32(ctx, 31, 0x313570u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x313568u, 0x313570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313570u;
label_313570:
    // 0x313570: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x313570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x313574: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x313574u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x313578: 0x0  nop
    ctx->pc = 0x313578u;
    // NOP
    // 0x31357c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x31357cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x313580: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x313580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x313584: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x313584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313588: 0x0  nop
    ctx->pc = 0x313588u;
    // NOP
    // 0x31358c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x31358cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x313590: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x313590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_313594:
    // 0x313594: 0xc067648  jal         func_19D920
    ctx->pc = 0x313594u;
    SET_GPR_U32(ctx, 31, 0x31359Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x313594u, 0x31359Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31359Cu;
label_31359c:
    // 0x31359c: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x31359cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x3135a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3135a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3135a4: 0x0  nop
    ctx->pc = 0x3135a4u;
    // NOP
    // 0x3135a8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3135a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3135ac: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x3135acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x3135b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3135b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3135b4: 0x0  nop
    ctx->pc = 0x3135b4u;
    // NOP
    // 0x3135b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3135b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3135bc: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x3135bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_3135c0:
    // 0x3135c0: 0xc067648  jal         func_19D920
    ctx->pc = 0x3135C0u;
    SET_GPR_U32(ctx, 31, 0x3135C8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x3135C0u, 0x3135C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3135C8u;
label_3135c8:
    // 0x3135c8: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x3135c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x3135cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3135ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3135d0: 0x0  nop
    ctx->pc = 0x3135d0u;
    // NOP
    // 0x3135d4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3135d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3135d8: 0x3c02443b  lui         $v0, 0x443B
    ctx->pc = 0x3135d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17467 << 16));
    // 0x3135dc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3135dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3135e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3135e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3135e4: 0x0  nop
    ctx->pc = 0x3135e4u;
    // NOP
    // 0x3135e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3135e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3135ec: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x3135ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_3135f0:
    // 0x3135f0: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x3135f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x3135f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3135f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3135f8: 0x0  nop
    ctx->pc = 0x3135f8u;
    // NOP
    // 0x3135fc: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x3135fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x313600: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x313600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x313604: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x313604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313608: 0x0  nop
    ctx->pc = 0x313608u;
    // NOP
    // 0x31360c: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x31360cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x313610: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x313610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x313614: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x313614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313618: 0x0  nop
    ctx->pc = 0x313618u;
    // NOP
    // 0x31361c: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x31361cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x313620: 0x3c0242c4  lui         $v0, 0x42C4
    ctx->pc = 0x313620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17092 << 16));
    // 0x313624: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x313624u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313628: 0x0  nop
    ctx->pc = 0x313628u;
    // NOP
    // 0x31362c: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x31362cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x313630: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x313630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x313634: 0xa202011c  sb          $v0, 0x11C($s0)
    ctx->pc = 0x313634u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 2));
    // 0x313638: 0x3c023f74  lui         $v0, 0x3F74
    ctx->pc = 0x313638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16244 << 16));
    // 0x31363c: 0x34427ae1  ori         $v0, $v0, 0x7AE1
    ctx->pc = 0x31363cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31457);
    // 0x313640: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x313640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313644: 0x0  nop
    ctx->pc = 0x313644u;
    // NOP
    // 0x313648: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x313648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x31364c: 0x3c02bc75  lui         $v0, 0xBC75
    ctx->pc = 0x31364cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48245 << 16));
    // 0x313650: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x313650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x313654: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x313654u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313658: 0x0  nop
    ctx->pc = 0x313658u;
    // NOP
    // 0x31365c: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x31365cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x313660: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x313660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x313664: 0xa202011b  sb          $v0, 0x11B($s0)
    ctx->pc = 0x313664u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 283), (uint8_t)GPR_U32(ctx, 2));
    // 0x313668: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x313668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31366c: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x31366cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x313670: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x313670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x313674: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x313674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x313678: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x313678u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x31367c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31367Cu;
    SET_GPR_U32(ctx, 31, 0x313684u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31367Cu, 0x313684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313684u;
label_313684:
    // 0x313684: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x313684u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x313688: 0x72201628  paddub      $v0, $s1, $zero
    ctx->pc = 0x313688u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x31368c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x31368cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x313690: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x313690u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x313694: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x313694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x313698: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x313698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x31369c: 0x3e00008  jr          $ra
    ctx->pc = 0x31369Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31369Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3136A4u;
}
