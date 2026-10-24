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

// Function: Get_evt_cam_data
// Address: 0x263900 - 0x263c14
void Get_evt_cam_data_0x263900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Get_evt_cam_data_0x263900");
#endif

    switch (ctx->pc) {
        case 0x26395cu: goto label_26395c;
        case 0x26396cu: goto label_26396c;
        case 0x2639acu: goto label_2639ac;
        case 0x2639d4u: goto label_2639d4;
        case 0x2639fcu: goto label_2639fc;
        case 0x263a8cu: goto label_263a8c;
        case 0x263ad4u: goto label_263ad4;
        case 0x263b14u: goto label_263b14;
        case 0x263b38u: goto label_263b38;
        default: break;
    }

    ctx->pc = 0x263900u;

    // 0x263900: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x263900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x263904: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x263904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x263908: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x263908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26390c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26390cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x263910: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x263910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x263914: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x263914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x263918: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x263918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
    // 0x26391c: 0xafa500c8  sw          $a1, 0xC8($sp)
    ctx->pc = 0x26391cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 5));
    // 0x263920: 0xafa600d0  sw          $a2, 0xD0($sp)
    ctx->pc = 0x263920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 6));
    // 0x263924: 0xafa700d8  sw          $a3, 0xD8($sp)
    ctx->pc = 0x263924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 7));
    // 0x263928: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x263928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x26392c: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x26392cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x263930: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x263930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x263934: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x263934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263938: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x263938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x26393c: 0xe44001b0  swc1        $f0, 0x1B0($v0)
    ctx->pc = 0x26393cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 432), bits); }
    // 0x263940: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x263940u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263944: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x263944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x263948: 0xe44001bc  swc1        $f0, 0x1BC($v0)
    ctx->pc = 0x263948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 444), bits); }
    // 0x26394c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x26394cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x263950: 0x24440190  addiu       $a0, $v0, 0x190
    ctx->pc = 0x263950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x263954: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x263954u;
    SET_GPR_U32(ctx, 31, 0x26395Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x263954u, 0x26395Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26395Cu;
label_26395c:
    // 0x26395c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x26395cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x263960: 0x244401a0  addiu       $a0, $v0, 0x1A0
    ctx->pc = 0x263960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    // 0x263964: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x263964u;
    SET_GPR_U32(ctx, 31, 0x26396Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x263964u, 0x26396Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26396Cu;
label_26396c:
    // 0x26396c: 0x8fb100c0  lw          $s1, 0xC0($sp)
    ctx->pc = 0x26396cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x263970: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x263970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x263974: 0xafa30090  sw          $v1, 0x90($sp)
    ctx->pc = 0x263974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
    // 0x263978: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x263978u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26397c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x26397cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x263980: 0xafa30094  sw          $v1, 0x94($sp)
    ctx->pc = 0x263980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 3));
    // 0x263984: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x263984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x263988: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x263988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x26398c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26398cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x263990: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x263990u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x263994: 0x14200097  bnez        $at, . + 4 + (0x97 << 2)
    ctx->pc = 0x263994u;
    {
        const bool branch_taken_0x263994 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x263994) {
            ctx->pc = 0x263BF4u;
            goto label_263bf4;
        }
    }
    ctx->pc = 0x26399Cu;
    // 0x26399c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x26399cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2639a0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2639a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2639a4: 0xc040cb8  jal         func_1032E0
    ctx->pc = 0x2639A4u;
    SET_GPR_U32(ctx, 31, 0x2639ACu);
    ctx->pc = 0x1032E0u;
    {
        ctx->pc = 0x2639ACu;
        ps2_stubs::sceVu0ITOF0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2639ACu) { return; }
    ctx->pc = 0x2639ACu;
label_2639ac:
    // 0x2639ac: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x2639acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2639b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2639b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2639b4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2639b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2639b8: 0x24530003  addiu       $s3, $v0, 0x3
    ctx->pc = 0x2639b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x2639bc: 0x26630003  addiu       $v1, $s3, 0x3
    ctx->pc = 0x2639bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x2639c0: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x2639c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x2639c4: 0x629824  and         $s3, $v1, $v0
    ctx->pc = 0x2639c4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2639c8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2639c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2639cc: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2639CCu;
    SET_GPR_U32(ctx, 31, 0x2639D4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2639CCu, 0x2639D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2639D4u;
label_2639d4:
    // 0x2639d4: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2639d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2639d8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2639d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2639dc: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x2639dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2639e0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2639e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2639e4: 0xa7a00058  sh          $zero, 0x58($sp)
    ctx->pc = 0x2639e4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 88), (uint16_t)GPR_U32(ctx, 0));
    // 0x2639e8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2639e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2639ec: 0xa3a30070  sb          $v1, 0x70($sp)
    ctx->pc = 0x2639ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 3));
    // 0x2639f0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2639f0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2639f4: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x2639F4u;
    {
        const bool branch_taken_0x2639f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2639f4) {
            ctx->pc = 0x263BE0u;
            goto label_263be0;
        }
    }
    ctx->pc = 0x2639FCu;
label_2639fc:
    // 0x2639fc: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x2639fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x263a00: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x263a00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x263a04: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x263a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x263a08: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x263a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x263a0c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x263a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x263a10: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x263a10u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x263a14: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x263a14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x263a18: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x263a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x263a1c: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x263a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x263a20: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x263a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x263a24: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x263a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x263a28: 0xafa3005c  sw          $v1, 0x5C($sp)
    ctx->pc = 0x263a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
    // 0x263a2c: 0xa7a000b8  sh          $zero, 0xB8($sp)
    ctx->pc = 0x263a2cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 184), (uint16_t)GPR_U32(ctx, 0));
    // 0x263a30: 0xa7a000ba  sh          $zero, 0xBA($sp)
    ctx->pc = 0x263a30u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 186), (uint16_t)GPR_U32(ctx, 0));
    // 0x263a34: 0xa7a000bc  sh          $zero, 0xBC($sp)
    ctx->pc = 0x263a34u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 188), (uint16_t)GPR_U32(ctx, 0));
    // 0x263a38: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x263a38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x263a3c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x263a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x263a40: 0x10830038  beq         $a0, $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x263A40u;
    {
        const bool branch_taken_0x263a40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x263a40) {
            ctx->pc = 0x263B24u;
            goto label_263b24;
        }
    }
    ctx->pc = 0x263A48u;
    // 0x263a48: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x263a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x263a4c: 0x1083002c  beq         $a0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x263A4Cu;
    {
        const bool branch_taken_0x263a4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x263a4c) {
            ctx->pc = 0x263B00u;
            goto label_263b00;
        }
    }
    ctx->pc = 0x263A54u;
    // 0x263a54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x263a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x263a58: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x263A58u;
    {
        const bool branch_taken_0x263a58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x263a58) {
            ctx->pc = 0x263AB8u;
            goto label_263ab8;
        }
    }
    ctx->pc = 0x263A60u;
    // 0x263a60: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x263A60u;
    {
        const bool branch_taken_0x263a60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x263a60) {
            ctx->pc = 0x263A70u;
            goto label_263a70;
        }
    }
    ctx->pc = 0x263A68u;
    // 0x263a68: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x263A68u;
    {
        const bool branch_taken_0x263a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263a68) {
            ctx->pc = 0x263BD8u;
            goto label_263bd8;
        }
    }
    ctx->pc = 0x263A70u;
label_263a70:
    // 0x263a70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x263a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x263a74: 0xa7a2005a  sh          $v0, 0x5A($sp)
    ctx->pc = 0x263a74u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 90), (uint16_t)GPR_U32(ctx, 2));
    // 0x263a78: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x263a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x263a7c: 0x27a500a8  addiu       $a1, $sp, 0xA8
    ctx->pc = 0x263a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x263a80: 0x27a600b8  addiu       $a2, $sp, 0xB8
    ctx->pc = 0x263a80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x263a84: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x263A84u;
    SET_GPR_U32(ctx, 31, 0x263A8Cu);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x263A84u, 0x263A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263A8Cu;
label_263a8c:
    // 0x263a8c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x263a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263a90: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x263a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x263a94: 0xe4600190  swc1        $f0, 0x190($v1)
    ctx->pc = 0x263a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 400), bits); }
    // 0x263a98: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x263a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263a9c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x263a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x263aa0: 0xe4600194  swc1        $f0, 0x194($v1)
    ctx->pc = 0x263aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 404), bits); }
    // 0x263aa4: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x263aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263aa8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x263aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x263aac: 0xe4600198  swc1        $f0, 0x198($v1)
    ctx->pc = 0x263aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 408), bits); }
    // 0x263ab0: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x263AB0u;
    {
        const bool branch_taken_0x263ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263ab0) {
            ctx->pc = 0x263BD8u;
            goto label_263bd8;
        }
    }
    ctx->pc = 0x263AB8u;
label_263ab8:
    // 0x263ab8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x263ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x263abc: 0xa7a2005a  sh          $v0, 0x5A($sp)
    ctx->pc = 0x263abcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 90), (uint16_t)GPR_U32(ctx, 2));
    // 0x263ac0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x263ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x263ac4: 0x27a500a8  addiu       $a1, $sp, 0xA8
    ctx->pc = 0x263ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x263ac8: 0x27a600b8  addiu       $a2, $sp, 0xB8
    ctx->pc = 0x263ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x263acc: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x263ACCu;
    SET_GPR_U32(ctx, 31, 0x263AD4u);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x263ACCu, 0x263AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263AD4u;
label_263ad4:
    // 0x263ad4: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x263ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263ad8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x263ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x263adc: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x263adcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x263ae0: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x263ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263ae4: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x263ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x263ae8: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x263ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x263aec: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x263aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263af0: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x263af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x263af4: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x263af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    // 0x263af8: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x263AF8u;
    {
        const bool branch_taken_0x263af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263af8) {
            ctx->pc = 0x263BD8u;
            goto label_263bd8;
        }
    }
    ctx->pc = 0x263B00u;
label_263b00:
    // 0x263b00: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x263b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x263b04: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x263b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x263b08: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x263b08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x263b0c: 0xc098d00  jal         func_263400
    ctx->pc = 0x263B0Cu;
    SET_GPR_U32(ctx, 31, 0x263B14u);
    ctx->pc = 0x263400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263400u, 0x263B0Cu, 0x263B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263B14u;
label_263b14:
    // 0x263b14: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x263b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x263b18: 0xe46001b0  swc1        $f0, 0x1B0($v1)
    ctx->pc = 0x263b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 432), bits); }
    // 0x263b1c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x263B1Cu;
    {
        const bool branch_taken_0x263b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263b1c) {
            ctx->pc = 0x263BD8u;
            goto label_263bd8;
        }
    }
    ctx->pc = 0x263B24u;
label_263b24:
    // 0x263b24: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x263b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x263b28: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x263b28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x263b2c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x263b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x263b30: 0xc098d00  jal         func_263400
    ctx->pc = 0x263B30u;
    SET_GPR_U32(ctx, 31, 0x263B38u);
    ctx->pc = 0x263400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263400u, 0x263B30u, 0x263B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263B38u;
label_263b38:
    // 0x263b38: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x263b38u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x263b3c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x263b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x263b40: 0xe46001bc  swc1        $f0, 0x1BC($v1)
    ctx->pc = 0x263b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 444), bits); }
    // 0x263b44: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x263b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x263b48: 0xc46101bc  lwc1        $f1, 0x1BC($v1)
    ctx->pc = 0x263b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x263b4c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x263b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x263b50: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x263b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x263b54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x263b54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263b58: 0x0  nop
    ctx->pc = 0x263b58u;
    // NOP
    // 0x263b5c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x263b5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x263b60: 0x0  nop
    ctx->pc = 0x263b60u;
    // NOP
    // 0x263b64: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x263B64u;
    {
        const bool branch_taken_0x263b64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x263b64) {
            ctx->pc = 0x263B90u;
            goto label_263b90;
        }
    }
    ctx->pc = 0x263B6Cu;
    // 0x263b6c: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x263b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x263b70: 0xc48101bc  lwc1        $f1, 0x1BC($a0)
    ctx->pc = 0x263b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x263b74: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x263b74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x263b78: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x263b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x263b7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x263b7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263b80: 0x0  nop
    ctx->pc = 0x263b80u;
    // NOP
    // 0x263b84: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x263b84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x263b88: 0xe48001bc  swc1        $f0, 0x1BC($a0)
    ctx->pc = 0x263b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 444), bits); }
    // 0x263b8c: 0x0  nop
    ctx->pc = 0x263b8cu;
    // NOP
label_263b90:
    // 0x263b90: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x263b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x263b94: 0xc46101bc  lwc1        $f1, 0x1BC($v1)
    ctx->pc = 0x263b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x263b98: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x263b98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x263b9c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x263b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x263ba0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x263ba0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263ba4: 0x0  nop
    ctx->pc = 0x263ba4u;
    // NOP
    // 0x263ba8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x263ba8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x263bac: 0x0  nop
    ctx->pc = 0x263bacu;
    // NOP
    // 0x263bb0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x263BB0u;
    {
        const bool branch_taken_0x263bb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x263bb0) {
            ctx->pc = 0x263BD8u;
            goto label_263bd8;
        }
    }
    ctx->pc = 0x263BB8u;
    // 0x263bb8: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x263bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x263bbc: 0xc48101bc  lwc1        $f1, 0x1BC($a0)
    ctx->pc = 0x263bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x263bc0: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x263bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x263bc4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x263bc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x263bc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x263bc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263bcc: 0x0  nop
    ctx->pc = 0x263bccu;
    // NOP
    // 0x263bd0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x263bd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x263bd4: 0xe48001bc  swc1        $f0, 0x1BC($a0)
    ctx->pc = 0x263bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 444), bits); }
label_263bd8:
    // 0x263bd8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x263bd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x263bdc: 0x0  nop
    ctx->pc = 0x263bdcu;
    // NOP
label_263be0:
    // 0x263be0: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x263be0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x263be4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x263be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x263be8: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x263be8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x263bec: 0x1460ff83  bnez        $v1, . + 4 + (-0x7D << 2)
    ctx->pc = 0x263BECu;
    {
        const bool branch_taken_0x263bec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x263bec) {
            ctx->pc = 0x2639FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2639fc;
        }
    }
    ctx->pc = 0x263BF4u;
label_263bf4:
    // 0x263bf4: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x263bf4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x263bf8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x263bf8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x263bfc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x263bfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x263c00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x263c00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x263c04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x263c04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x263c08: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x263c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x263c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x263C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x263C14u;
}
