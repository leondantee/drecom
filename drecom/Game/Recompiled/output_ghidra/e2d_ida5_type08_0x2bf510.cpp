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

// Function: e2d_ida5_type08
// Address: 0x2bf510 - 0x2bf680
void e2d_ida5_type08_0x2bf510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_ida5_type08_0x2bf510");
#endif

    switch (ctx->pc) {
        case 0x2bf5bcu: goto label_2bf5bc;
        default: break;
    }

    ctx->pc = 0x2bf510u;

    // 0x2bf510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bf510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bf514: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bf514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bf518: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bf518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bf51c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2bf51cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2bf520: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bf520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf524: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bf524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf528: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2bf528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2bf52c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2bf52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2bf530: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bf530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf534: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bf534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf538: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2bf538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2bf53c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2bf53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2bf540: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bf540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf544: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bf544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf548: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2bf548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2bf54c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2bf54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2bf550: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bf550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf554: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bf554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf558: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2bf558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2bf55c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bf55cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bf560: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2bf560u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2bf564: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2bf564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2bf568: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2bf568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bf56c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bf56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bf570: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2bf570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bf574: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2bf574u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2bf578: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bf578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bf57c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2bf57cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2bf580: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2bf580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2bf584: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2bf584u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bf588: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bf588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bf58c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2bf58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2bf590: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2bf590u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2bf594: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2bf594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2bf598: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bf598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bf59c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2bf59cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2bf5a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2bf5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bf5a4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2bf5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2bf5a8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2bf5a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bf5ac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bf5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf5b0: 0xa043011a  sb          $v1, 0x11A($v0)
    ctx->pc = 0x2bf5b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bf5b4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2BF5B4u;
    SET_GPR_U32(ctx, 31, 0x2BF5BCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2BF5B4u, 0x2BF5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF5BCu;
label_2bf5bc:
    // 0x2bf5bc: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2bf5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2bf5c0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bf5c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bf5c4: 0x0  nop
    ctx->pc = 0x2bf5c4u;
    // NOP
    // 0x2bf5c8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bf5c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bf5cc: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2bf5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2bf5d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bf5d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf5d4: 0x0  nop
    ctx->pc = 0x2bf5d4u;
    // NOP
    // 0x2bf5d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bf5d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bf5dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bf5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf5e0: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2bf5e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2bf5e4: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x2bf5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x2bf5e8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2bf5e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2bf5ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bf5ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf5f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bf5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf5f4: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2bf5f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2bf5f8: 0x3c03be99  lui         $v1, 0xBE99
    ctx->pc = 0x2bf5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48793 << 16));
    // 0x2bf5fc: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2bf5fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2bf600: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bf600u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf604: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bf604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf608: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x2bf608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x2bf60c: 0x3c03c040  lui         $v1, 0xC040
    ctx->pc = 0x2bf60cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49216 << 16));
    // 0x2bf610: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bf610u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf614: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bf614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf618: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x2bf618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x2bf61c: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2bf61cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2bf620: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bf620u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf624: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bf624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf628: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x2bf628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x2bf62c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2bf62cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2bf630: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bf630u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf634: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bf634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf638: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x2bf638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x2bf63c: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2bf63cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2bf640: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bf640u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf644: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bf644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf648: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x2bf648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x2bf64c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2bf64cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2bf650: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bf650u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf654: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bf654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf658: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x2bf658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x2bf65c: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x2bf65cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x2bf660: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x2bf660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x2bf664: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bf664u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf668: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bf668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf66c: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2bf66cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x2bf670: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bf670u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf674: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bf674u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bf678: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF680u;
}
