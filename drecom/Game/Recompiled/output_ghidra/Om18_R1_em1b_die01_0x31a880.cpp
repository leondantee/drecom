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

// Function: Om18_R1_em1b_die01
// Address: 0x31a880 - 0x31aaa8
void Om18_R1_em1b_die01_0x31a880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om18_R1_em1b_die01_0x31a880");
#endif

    switch (ctx->pc) {
        case 0x31a880u: goto label_31a880;
        case 0x31a884u: goto label_31a884;
        case 0x31a888u: goto label_31a888;
        case 0x31a88cu: goto label_31a88c;
        case 0x31a890u: goto label_31a890;
        case 0x31a894u: goto label_31a894;
        case 0x31a898u: goto label_31a898;
        case 0x31a89cu: goto label_31a89c;
        case 0x31a8a0u: goto label_31a8a0;
        case 0x31a8a4u: goto label_31a8a4;
        case 0x31a8a8u: goto label_31a8a8;
        case 0x31a8acu: goto label_31a8ac;
        case 0x31a8b0u: goto label_31a8b0;
        case 0x31a8b4u: goto label_31a8b4;
        case 0x31a8b8u: goto label_31a8b8;
        case 0x31a8bcu: goto label_31a8bc;
        case 0x31a8c0u: goto label_31a8c0;
        case 0x31a8c4u: goto label_31a8c4;
        case 0x31a8c8u: goto label_31a8c8;
        case 0x31a8ccu: goto label_31a8cc;
        case 0x31a8d0u: goto label_31a8d0;
        case 0x31a8d4u: goto label_31a8d4;
        case 0x31a8d8u: goto label_31a8d8;
        case 0x31a8dcu: goto label_31a8dc;
        case 0x31a8e0u: goto label_31a8e0;
        case 0x31a8e4u: goto label_31a8e4;
        case 0x31a8e8u: goto label_31a8e8;
        case 0x31a8ecu: goto label_31a8ec;
        case 0x31a8f0u: goto label_31a8f0;
        case 0x31a8f4u: goto label_31a8f4;
        case 0x31a8f8u: goto label_31a8f8;
        case 0x31a8fcu: goto label_31a8fc;
        case 0x31a900u: goto label_31a900;
        case 0x31a904u: goto label_31a904;
        case 0x31a908u: goto label_31a908;
        case 0x31a90cu: goto label_31a90c;
        case 0x31a910u: goto label_31a910;
        case 0x31a914u: goto label_31a914;
        case 0x31a918u: goto label_31a918;
        case 0x31a91cu: goto label_31a91c;
        case 0x31a920u: goto label_31a920;
        case 0x31a924u: goto label_31a924;
        case 0x31a928u: goto label_31a928;
        case 0x31a92cu: goto label_31a92c;
        case 0x31a930u: goto label_31a930;
        case 0x31a934u: goto label_31a934;
        case 0x31a938u: goto label_31a938;
        case 0x31a93cu: goto label_31a93c;
        case 0x31a940u: goto label_31a940;
        case 0x31a944u: goto label_31a944;
        case 0x31a948u: goto label_31a948;
        case 0x31a94cu: goto label_31a94c;
        case 0x31a950u: goto label_31a950;
        case 0x31a954u: goto label_31a954;
        case 0x31a958u: goto label_31a958;
        case 0x31a95cu: goto label_31a95c;
        case 0x31a960u: goto label_31a960;
        case 0x31a964u: goto label_31a964;
        case 0x31a968u: goto label_31a968;
        case 0x31a96cu: goto label_31a96c;
        case 0x31a970u: goto label_31a970;
        case 0x31a974u: goto label_31a974;
        case 0x31a978u: goto label_31a978;
        case 0x31a97cu: goto label_31a97c;
        case 0x31a980u: goto label_31a980;
        case 0x31a984u: goto label_31a984;
        case 0x31a988u: goto label_31a988;
        case 0x31a98cu: goto label_31a98c;
        case 0x31a990u: goto label_31a990;
        case 0x31a994u: goto label_31a994;
        case 0x31a998u: goto label_31a998;
        case 0x31a99cu: goto label_31a99c;
        case 0x31a9a0u: goto label_31a9a0;
        case 0x31a9a4u: goto label_31a9a4;
        case 0x31a9a8u: goto label_31a9a8;
        case 0x31a9acu: goto label_31a9ac;
        case 0x31a9b0u: goto label_31a9b0;
        case 0x31a9b4u: goto label_31a9b4;
        case 0x31a9b8u: goto label_31a9b8;
        case 0x31a9bcu: goto label_31a9bc;
        case 0x31a9c0u: goto label_31a9c0;
        case 0x31a9c4u: goto label_31a9c4;
        case 0x31a9c8u: goto label_31a9c8;
        case 0x31a9ccu: goto label_31a9cc;
        case 0x31a9d0u: goto label_31a9d0;
        case 0x31a9d4u: goto label_31a9d4;
        case 0x31a9d8u: goto label_31a9d8;
        case 0x31a9dcu: goto label_31a9dc;
        case 0x31a9e0u: goto label_31a9e0;
        case 0x31a9e4u: goto label_31a9e4;
        case 0x31a9e8u: goto label_31a9e8;
        case 0x31a9ecu: goto label_31a9ec;
        case 0x31a9f0u: goto label_31a9f0;
        case 0x31a9f4u: goto label_31a9f4;
        case 0x31a9f8u: goto label_31a9f8;
        case 0x31a9fcu: goto label_31a9fc;
        case 0x31aa00u: goto label_31aa00;
        case 0x31aa04u: goto label_31aa04;
        case 0x31aa08u: goto label_31aa08;
        case 0x31aa0cu: goto label_31aa0c;
        case 0x31aa10u: goto label_31aa10;
        case 0x31aa14u: goto label_31aa14;
        case 0x31aa18u: goto label_31aa18;
        case 0x31aa1cu: goto label_31aa1c;
        case 0x31aa20u: goto label_31aa20;
        case 0x31aa24u: goto label_31aa24;
        case 0x31aa28u: goto label_31aa28;
        case 0x31aa2cu: goto label_31aa2c;
        case 0x31aa30u: goto label_31aa30;
        case 0x31aa34u: goto label_31aa34;
        case 0x31aa38u: goto label_31aa38;
        case 0x31aa3cu: goto label_31aa3c;
        case 0x31aa40u: goto label_31aa40;
        case 0x31aa44u: goto label_31aa44;
        case 0x31aa48u: goto label_31aa48;
        case 0x31aa4cu: goto label_31aa4c;
        case 0x31aa50u: goto label_31aa50;
        case 0x31aa54u: goto label_31aa54;
        case 0x31aa58u: goto label_31aa58;
        case 0x31aa5cu: goto label_31aa5c;
        case 0x31aa60u: goto label_31aa60;
        case 0x31aa64u: goto label_31aa64;
        case 0x31aa68u: goto label_31aa68;
        case 0x31aa6cu: goto label_31aa6c;
        case 0x31aa70u: goto label_31aa70;
        case 0x31aa74u: goto label_31aa74;
        case 0x31aa78u: goto label_31aa78;
        case 0x31aa7cu: goto label_31aa7c;
        case 0x31aa80u: goto label_31aa80;
        case 0x31aa84u: goto label_31aa84;
        case 0x31aa88u: goto label_31aa88;
        case 0x31aa8cu: goto label_31aa8c;
        case 0x31aa90u: goto label_31aa90;
        case 0x31aa94u: goto label_31aa94;
        case 0x31aa98u: goto label_31aa98;
        case 0x31aa9cu: goto label_31aa9c;
        case 0x31aaa0u: goto label_31aaa0;
        case 0x31aaa4u: goto label_31aaa4;
        default: break;
    }

    ctx->pc = 0x31a880u;

label_31a880:
    // 0x31a880: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x31a880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_31a884:
    // 0x31a884: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x31a884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
label_31a888:
    // 0x31a888: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31a888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_31a88c:
    // 0x31a88c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31a88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_31a890:
    // 0x31a890: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x31a890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
label_31a894:
    // 0x31a894: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x31a894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_31a898:
    // 0x31a898: 0x24429c70  addiu       $v0, $v0, -0x6390
    ctx->pc = 0x31a898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941808));
label_31a89c:
    // 0x31a89c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x31a89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_31a8a0:
    // 0x31a8a0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x31a8a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_31a8a4:
    // 0x31a8a4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x31a8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_31a8a8:
    // 0x31a8a8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x31a8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_31a8ac:
    // 0x31a8ac: 0x24429c80  addiu       $v0, $v0, -0x6380
    ctx->pc = 0x31a8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941824));
label_31a8b0:
    // 0x31a8b0: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x31a8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_31a8b4:
    // 0x31a8b4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x31a8b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_31a8b8:
    // 0x31a8b8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x31a8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_31a8bc:
    // 0x31a8bc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x31a8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_31a8c0:
    // 0x31a8c0: 0xc0c6b98  jal         func_31AE60
label_31a8c4:
    if (ctx->pc == 0x31A8C4u) {
        ctx->pc = 0x31A8C8u;
        goto label_31a8c8;
    }
    ctx->pc = 0x31A8C0u;
    SET_GPR_U32(ctx, 31, 0x31A8C8u);
    ctx->pc = 0x31AE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AE60u, 0x31A8C0u, 0x31A8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A8C8u;
label_31a8c8:
    // 0x31a8c8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x31a8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_31a8cc:
    // 0x31a8cc: 0x8c7112a4  lw          $s1, 0x12A4($v1)
    ctx->pc = 0x31a8ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4772)));
label_31a8d0:
    // 0x31a8d0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x31a8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_31a8d4:
    // 0x31a8d4: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x31a8d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_31a8d8:
    // 0x31a8d8: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x31a8d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_31a8dc:
    // 0x31a8dc: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x31a8dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_31a8e0:
    // 0x31a8e0: 0x1020006b  beqz        $at, . + 4 + (0x6B << 2)
label_31a8e4:
    if (ctx->pc == 0x31A8E4u) {
        ctx->pc = 0x31A8E8u;
        goto label_31a8e8;
    }
    ctx->pc = 0x31A8E0u;
    {
        const bool branch_taken_0x31a8e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a8e0) {
            ctx->pc = 0x31AA90u;
            goto label_31aa90;
        }
    }
    ctx->pc = 0x31A8E8u;
label_31a8e8:
    // 0x31a8e8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x31a8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_31a8ec:
    // 0x31a8ec: 0x24641dc0  addiu       $a0, $v1, 0x1DC0
    ctx->pc = 0x31a8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 7616));
label_31a8f0:
    // 0x31a8f0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x31a8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_31a8f4:
    // 0x31a8f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31a8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_31a8f8:
    // 0x31a8f8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x31a8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_31a8fc:
    // 0x31a8fc: 0x600008  jr          $v1
label_31a900:
    if (ctx->pc == 0x31A900u) {
        ctx->pc = 0x31A904u;
        goto label_31a904;
    }
    ctx->pc = 0x31A8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A8FCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x31A904u;
label_31a904:
    // 0x31a904: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x31a904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_31a908:
    // 0x31a908: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x31a908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_31a90c:
    // 0x31a90c: 0xac4312b0  sw          $v1, 0x12B0($v0)
    ctx->pc = 0x31a90cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4784), GPR_U32(ctx, 3));
label_31a910:
    // 0x31a910: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x31a910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_31a914:
    // 0x31a914: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x31a914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_31a918:
    // 0x31a918: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31a918u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31a91c:
    // 0x31a91c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x31a91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_31a920:
    // 0x31a920: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x31a920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
label_31a924:
    // 0x31a924: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x31a924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_31a928:
    // 0x31a928: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x31a928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_31a92c:
    // 0x31a92c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31a92cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31a930:
    // 0x31a930: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x31a930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_31a934:
    // 0x31a934: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x31a934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
label_31a938:
    // 0x31a938: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x31a938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_31a93c:
    // 0x31a93c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x31a93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_31a940:
    // 0x31a940: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31a940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31a944:
    // 0x31a944: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x31a944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_31a948:
    // 0x31a948: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x31a948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
label_31a94c:
    // 0x31a94c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x31a94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_31a950:
    // 0x31a950: 0xac40128c  sw          $zero, 0x128C($v0)
    ctx->pc = 0x31a950u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4748), GPR_U32(ctx, 0));
label_31a954:
    // 0x31a954: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x31a954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_31a958:
    // 0x31a958: 0xac401290  sw          $zero, 0x1290($v0)
    ctx->pc = 0x31a958u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4752), GPR_U32(ctx, 0));
label_31a95c:
    // 0x31a95c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31a95cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31a960:
    // 0x31a960: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x31a960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_31a964:
    // 0x31a964: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x31a964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_31a968:
    // 0x31a968: 0xe440010c  swc1        $f0, 0x10C($v0)
    ctx->pc = 0x31a968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 268), bits); }
label_31a96c:
    // 0x31a96c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x31a96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_31a970:
    // 0x31a970: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x31a970u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_31a974:
    // 0x31a974: 0x24040057  addiu       $a0, $zero, 0x57
    ctx->pc = 0x31a974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
label_31a978:
    // 0x31a978: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x31a978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_31a97c:
    // 0x31a97c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x31a97cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_31a980:
    // 0x31a980: 0xc0654fc  jal         func_1953F0
label_31a984:
    if (ctx->pc == 0x31A984u) {
        ctx->pc = 0x31A988u;
        goto label_31a988;
    }
    ctx->pc = 0x31A980u;
    SET_GPR_U32(ctx, 31, 0x31A988u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x31A980u, 0x31A988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A988u;
label_31a988:
    // 0x31a988: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x31a988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_31a98c:
    // 0x31a98c: 0x8c421298  lw          $v0, 0x1298($v0)
    ctx->pc = 0x31a98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4760)));
label_31a990:
    // 0x31a990: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x31a990u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_31a994:
    // 0x31a994: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x31a994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
label_31a998:
    // 0x31a998: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x31a998u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_31a99c:
    // 0x31a99c: 0x24040057  addiu       $a0, $zero, 0x57
    ctx->pc = 0x31a99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
label_31a9a0:
    // 0x31a9a0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x31a9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_31a9a4:
    // 0x31a9a4: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x31a9a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_31a9a8:
    // 0x31a9a8: 0xc0654fc  jal         func_1953F0
label_31a9ac:
    if (ctx->pc == 0x31A9ACu) {
        ctx->pc = 0x31A9B0u;
        goto label_31a9b0;
    }
    ctx->pc = 0x31A9A8u;
    SET_GPR_U32(ctx, 31, 0x31A9B0u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x31A9A8u, 0x31A9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A9B0u;
label_31a9b0:
    // 0x31a9b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31a9b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_31a9b4:
    // 0x31a9b4: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x31a9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_31a9b8:
    // 0x31a9b8: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x31a9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_31a9bc:
    // 0x31a9bc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x31a9bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_31a9c0:
    // 0x31a9c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31a9c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_31a9c4:
    // 0x31a9c4: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x31a9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 3));
label_31a9c8:
    // 0x31a9c8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x31a9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_31a9cc:
    // 0x31a9cc: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x31a9ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_31a9d0:
    // 0x31a9d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31a9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_31a9d4:
    // 0x31a9d4: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x31a9d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_31a9d8:
    // 0x31a9d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31a9d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_31a9dc:
    // 0x31a9dc: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x31a9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_31a9e0:
    // 0x31a9e0: 0x3c03ffdf  lui         $v1, 0xFFDF
    ctx->pc = 0x31a9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65503 << 16));
label_31a9e4:
    // 0x31a9e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x31a9e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_31a9e8:
    // 0x31a9e8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x31a9e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_31a9ec:
    // 0x31a9ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31a9ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_31a9f0:
    // 0x31a9f0: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x31a9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 3));
label_31a9f4:
    // 0x31a9f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31a9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31a9f8:
    // 0x31a9f8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x31a9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_31a9fc:
    // 0x31a9fc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x31a9fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_31aa00:
    // 0x31aa00: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x31aa00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_31aa04:
    // 0x31aa04: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x31aa04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_31aa08:
    // 0x31aa08: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x31aa08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_31aa0c:
    // 0x31aa0c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x31aa0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_31aa10:
    // 0x31aa10: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x31aa10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_31aa14:
    // 0x31aa14: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x31aa14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_31aa18:
    // 0x31aa18: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x31aa18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_31aa1c:
    // 0x31aa1c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x31aa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_31aa20:
    // 0x31aa20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31aa20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31aa24:
    // 0x31aa24: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x31aa24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_31aa28:
    // 0x31aa28: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x31aa28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
label_31aa2c:
    // 0x31aa2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31aa2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31aa30:
    // 0x31aa30: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x31aa30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_31aa34:
    // 0x31aa34: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x31aa34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
label_31aa38:
    // 0x31aa38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31aa38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31aa3c:
    // 0x31aa3c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x31aa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_31aa40:
    // 0x31aa40: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x31aa40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
label_31aa44:
    // 0x31aa44: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x31aa44u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31aa48:
    // 0x31aa48: 0x10000007  b           . + 4 + (0x7 << 2)
label_31aa4c:
    if (ctx->pc == 0x31AA4Cu) {
        ctx->pc = 0x31AA50u;
        goto label_31aa50;
    }
    ctx->pc = 0x31AA48u;
    {
        const bool branch_taken_0x31aa48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31aa48) {
            ctx->pc = 0x31AA68u;
            goto label_31aa68;
        }
    }
    ctx->pc = 0x31AA50u;
label_31aa50:
    // 0x31aa50: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x31aa50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_31aa54:
    // 0x31aa54: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x31aa54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_31aa58:
    // 0x31aa58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31aa58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_31aa5c:
    // 0x31aa5c: 0xac60128c  sw          $zero, 0x128C($v1)
    ctx->pc = 0x31aa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4748), GPR_U32(ctx, 0));
label_31aa60:
    // 0x31aa60: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x31aa60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_31aa64:
    // 0x31aa64: 0x0  nop
    ctx->pc = 0x31aa64u;
    // NOP
label_31aa68:
    // 0x31aa68: 0x2e030008  sltiu       $v1, $s0, 0x8
    ctx->pc = 0x31aa68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_31aa6c:
    // 0x31aa6c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_31aa70:
    if (ctx->pc == 0x31AA70u) {
        ctx->pc = 0x31AA74u;
        goto label_31aa74;
    }
    ctx->pc = 0x31AA6Cu;
    {
        const bool branch_taken_0x31aa6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31aa6c) {
            ctx->pc = 0x31AA50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31aa50;
        }
    }
    ctx->pc = 0x31AA74u;
label_31aa74:
    // 0x31aa74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31aa74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31aa78:
    // 0x31aa78: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x31aa78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_31aa7c:
    // 0x31aa7c: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x31aa7cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
label_31aa80:
    // 0x31aa80: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x31aa80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_31aa84:
    // 0x31aa84: 0xa06011ee  sb          $zero, 0x11EE($v1)
    ctx->pc = 0x31aa84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4590), (uint8_t)GPR_U32(ctx, 0));
label_31aa88:
    // 0x31aa88: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x31aa88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_31aa8c:
    // 0x31aa8c: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x31aa8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
label_31aa90:
    // 0x31aa90: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x31aa90u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31aa94:
    // 0x31aa94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31aa94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_31aa98:
    // 0x31aa98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31aa98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_31aa9c:
    // 0x31aa9c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x31aa9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_31aaa0:
    // 0x31aaa0: 0x3e00008  jr          $ra
label_31aaa4:
    if (ctx->pc == 0x31AAA4u) {
        ctx->pc = 0x31AAA8u;
        goto label_fallthrough_0x31aaa0;
    }
    ctx->pc = 0x31AAA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AAA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31aaa0:
    ctx->pc = 0x31AAA8u;
}
