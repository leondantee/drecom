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

// Function: Rain_trans
// Address: 0x1accc0 - 0x1ad434
void Rain_trans_0x1accc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Rain_trans_0x1accc0");
#endif

    switch (ctx->pc) {
        case 0x1acd24u: goto label_1acd24;
        case 0x1ace50u: goto label_1ace50;
        case 0x1acf68u: goto label_1acf68;
        case 0x1acf80u: goto label_1acf80;
        case 0x1acf8cu: goto label_1acf8c;
        case 0x1acfc0u: goto label_1acfc0;
        case 0x1acff0u: goto label_1acff0;
        case 0x1ad008u: goto label_1ad008;
        case 0x1ad05cu: goto label_1ad05c;
        case 0x1ad1d8u: goto label_1ad1d8;
        case 0x1ad210u: goto label_1ad210;
        case 0x1ad224u: goto label_1ad224;
        case 0x1ad3a0u: goto label_1ad3a0;
        case 0x1ad400u: goto label_1ad400;
        default: break;
    }

    ctx->pc = 0x1accc0u;

    // 0x1accc0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1accc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x1accc4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x1accc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x1accc8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1accc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1acccc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1accccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1accd0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1accd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1accd4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1accd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1accd8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1accd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1accdc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1accdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1acce0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1acce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1acce4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1acce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1acce8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1acce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1accec: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x1accecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x1accf0: 0x2470f010  addiu       $s0, $v1, -0xFF0
    ctx->pc = 0x1accf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963216));
    // 0x1accf4: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x1accf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x1accf8: 0x2463f000  addiu       $v1, $v1, -0x1000
    ctx->pc = 0x1accf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963200));
    // 0x1accfc: 0xafa300f4  sw          $v1, 0xF4($sp)
    ctx->pc = 0x1accfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 3));
    // 0x1acd00: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1acd00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1acd04: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x1acd04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1acd08: 0xafa300f8  sw          $v1, 0xF8($sp)
    ctx->pc = 0x1acd08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 3));
    // 0x1acd0c: 0x3c01005f  lui         $at, 0x5F
    ctx->pc = 0x1acd0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)95 << 16));
    // 0x1acd10: 0x9023f001  lbu         $v1, -0xFFF($at)
    ctx->pc = 0x1acd10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5EF001u));
    // 0x1acd14: 0x106001ba  beqz        $v1, . + 4 + (0x1BA << 2)
    ctx->pc = 0x1ACD14u;
    {
        const bool branch_taken_0x1acd14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1acd14) {
            ctx->pc = 0x1AD400u;
            goto label_1ad400;
        }
    }
    ctx->pc = 0x1ACD1Cu;
    // 0x1acd1c: 0xc06b510  jal         func_1AD440
    ctx->pc = 0x1ACD1Cu;
    SET_GPR_U32(ctx, 31, 0x1ACD24u);
    ctx->pc = 0x1AD440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD440u, 0x1ACD1Cu, 0x1ACD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACD24u;
label_1acd24:
    // 0x1acd24: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1acd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1acd28: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1acd28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1acd2c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1acd2cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1acd30: 0xac22b4b0  sw          $v0, -0x4B50($at)
    ctx->pc = 0x1acd30u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948016), GPR_U32(ctx, 2));
    // 0x1acd34: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1acd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1acd38: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1acd38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1acd3c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1acd3cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1acd40: 0xac22b4b4  sw          $v0, -0x4B4C($at)
    ctx->pc = 0x1acd40u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948020), GPR_U32(ctx, 2));
    // 0x1acd44: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1acd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1acd48: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1acd48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1acd4c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1acd4cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1acd50: 0xac22b4b8  sw          $v0, -0x4B48($at)
    ctx->pc = 0x1acd50u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948024), GPR_U32(ctx, 2));
    // 0x1acd54: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1acd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1acd58: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1acd58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1acd5c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1acd5cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1acd60: 0xac22b4bc  sw          $v0, -0x4B44($at)
    ctx->pc = 0x1acd60u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948028), GPR_U32(ctx, 2));
    // 0x1acd64: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1acd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1acd68: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1acd68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1acd6c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1acd6cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1acd70: 0xac22b4c0  sw          $v0, -0x4B40($at)
    ctx->pc = 0x1acd70u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948032), GPR_U32(ctx, 2));
    // 0x1acd74: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1acd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1acd78: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1acd78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1acd7c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1acd7cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1acd80: 0xac22b4c4  sw          $v0, -0x4B3C($at)
    ctx->pc = 0x1acd80u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948036), GPR_U32(ctx, 2));
    // 0x1acd84: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1acd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1acd88: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1acd88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1acd8c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1acd8cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1acd90: 0xac22b4c8  sw          $v0, -0x4B38($at)
    ctx->pc = 0x1acd90u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948040), GPR_U32(ctx, 2));
    // 0x1acd94: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1acd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1acd98: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1acd98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1acd9c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1acd9cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1acda0: 0xac22b4cc  sw          $v0, -0x4B34($at)
    ctx->pc = 0x1acda0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948044), GPR_U32(ctx, 2));
    // 0x1acda4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1acda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1acda8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1acda8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1acdac: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1acdacu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1acdb0: 0xac22b4d0  sw          $v0, -0x4B30($at)
    ctx->pc = 0x1acdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948048), GPR_U32(ctx, 2));
    // 0x1acdb4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1acdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1acdb8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1acdb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1acdbc: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1acdbcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1acdc0: 0xac22b4d4  sw          $v0, -0x4B2C($at)
    ctx->pc = 0x1acdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948052), GPR_U32(ctx, 2));
    // 0x1acdc4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1acdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1acdc8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1acdc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1acdcc: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1acdccu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1acdd0: 0xac22b4d8  sw          $v0, -0x4B28($at)
    ctx->pc = 0x1acdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948056), GPR_U32(ctx, 2));
    // 0x1acdd4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1acdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1acdd8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1acdd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1acddc: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1acddcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1acde0: 0xac22b4dc  sw          $v0, -0x4B24($at)
    ctx->pc = 0x1acde0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948060), GPR_U32(ctx, 2));
    // 0x1acde4: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1acde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1acde8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1acde8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1acdec: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1acdecu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1acdf0: 0xac22b4e0  sw          $v0, -0x4B20($at)
    ctx->pc = 0x1acdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948064), GPR_U32(ctx, 2));
    // 0x1acdf4: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1acdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1acdf8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1acdf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1acdfc: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1acdfcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ace00: 0xac22b4e4  sw          $v0, -0x4B1C($at)
    ctx->pc = 0x1ace00u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948068), GPR_U32(ctx, 2));
    // 0x1ace04: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1ace04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1ace08: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ace08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ace0c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ace0cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ace10: 0xac22b4e8  sw          $v0, -0x4B18($at)
    ctx->pc = 0x1ace10u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948072), GPR_U32(ctx, 2));
    // 0x1ace14: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1ace14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1ace18: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ace18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ace1c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ace1cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ace20: 0xac22b4ec  sw          $v0, -0x4B14($at)
    ctx->pc = 0x1ace20u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948076), GPR_U32(ctx, 2));
    // 0x1ace24: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x1ace24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x1ace28: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x1ace28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
    // 0x1ace2c: 0xafa000e8  sw          $zero, 0xE8($sp)
    ctx->pc = 0x1ace2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 0));
    // 0x1ace30: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1ace30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1ace34: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x1ace34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x1ace38: 0x261e1d08  addiu       $fp, $s0, 0x1D08
    ctx->pc = 0x1ace38u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 7432));
    // 0x1ace3c: 0x27de7ff8  addiu       $fp, $fp, 0x7FF8
    ctx->pc = 0x1ace3cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 32760));
    // 0x1ace40: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x1ace40u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ace44: 0xafa000fc  sw          $zero, 0xFC($sp)
    ctx->pc = 0x1ace44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
    // 0x1ace48: 0x10000167  b           . + 4 + (0x167 << 2)
    ctx->pc = 0x1ACE48u;
    {
        const bool branch_taken_0x1ace48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ace48) {
            ctx->pc = 0x1AD3E8u;
            goto label_1ad3e8;
        }
    }
    ctx->pc = 0x1ACE50u;
label_1ace50:
    // 0x1ace50: 0x93c20000  lbu         $v0, 0x0($fp)
    ctx->pc = 0x1ace50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1ace54: 0x10400162  beqz        $v0, . + 4 + (0x162 << 2)
    ctx->pc = 0x1ACE54u;
    {
        const bool branch_taken_0x1ace54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ace54) {
            ctx->pc = 0x1AD3E0u;
            goto label_1ad3e0;
        }
    }
    ctx->pc = 0x1ACE5Cu;
    // 0x1ace5c: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x1ace5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x1ace60: 0x202a021  addu        $s4, $s0, $v0
    ctx->pc = 0x1ace60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1ace64: 0x151040  sll         $v0, $s5, 1
    ctx->pc = 0x1ace64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x1ace68: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1ace68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1ace6c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ace6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ace70: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1ace70u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1ace74: 0x8422a4d0  lh          $v0, -0x5B30($at)
    ctx->pc = 0x1ace74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294943952)));
    // 0x1ace78: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x1ace78u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1ace7c: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x1ace7cu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x1ace80: 0x2e2103e8  sltiu       $at, $s1, 0x3E8
    ctx->pc = 0x1ace80u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)1000) ? 1 : 0);
    // 0x1ace84: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ACE84u;
    {
        const bool branch_taken_0x1ace84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ace84) {
            ctx->pc = 0x1ACE98u;
            goto label_1ace98;
        }
    }
    ctx->pc = 0x1ACE8Cu;
    // 0x1ace8c: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x1ace8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ace90: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1ACE90u;
    {
        const bool branch_taken_0x1ace90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ace90) {
            ctx->pc = 0x1ACED0u;
            goto label_1aced0;
        }
    }
    ctx->pc = 0x1ACE98u;
label_1ace98:
    // 0x1ace98: 0x2e2107d0  sltiu       $at, $s1, 0x7D0
    ctx->pc = 0x1ace98u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2000) ? 1 : 0);
    // 0x1ace9c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ACE9Cu;
    {
        const bool branch_taken_0x1ace9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ace9c) {
            ctx->pc = 0x1ACEB0u;
            goto label_1aceb0;
        }
    }
    ctx->pc = 0x1ACEA4u;
    // 0x1acea4: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x1acea4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1acea8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1ACEA8u;
    {
        const bool branch_taken_0x1acea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1acea8) {
            ctx->pc = 0x1ACED0u;
            goto label_1aced0;
        }
    }
    ctx->pc = 0x1ACEB0u;
label_1aceb0:
    // 0x1aceb0: 0x2e210fa0  sltiu       $at, $s1, 0xFA0
    ctx->pc = 0x1aceb0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4000) ? 1 : 0);
    // 0x1aceb4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ACEB4u;
    {
        const bool branch_taken_0x1aceb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aceb4) {
            ctx->pc = 0x1ACEC8u;
            goto label_1acec8;
        }
    }
    ctx->pc = 0x1ACEBCu;
    // 0x1acebc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1acebcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1acec0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1ACEC0u;
    {
        const bool branch_taken_0x1acec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1acec0) {
            ctx->pc = 0x1ACED0u;
            goto label_1aced0;
        }
    }
    ctx->pc = 0x1ACEC8u;
label_1acec8:
    // 0x1acec8: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x1acec8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1acecc: 0x0  nop
    ctx->pc = 0x1aceccu;
    // NOP
label_1aced0:
    // 0x1aced0: 0x2e211801  sltiu       $at, $s1, 0x1801
    ctx->pc = 0x1aced0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)6145) ? 1 : 0);
    // 0x1aced4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ACED4u;
    {
        const bool branch_taken_0x1aced4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aced4) {
            ctx->pc = 0x1ACEE8u;
            goto label_1acee8;
        }
    }
    ctx->pc = 0x1ACEDCu;
    // 0x1acedc: 0x24171800  addiu       $s7, $zero, 0x1800
    ctx->pc = 0x1acedcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
    // 0x1acee0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1ACEE0u;
    {
        const bool branch_taken_0x1acee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1acee0) {
            ctx->pc = 0x1ACEF0u;
            goto label_1acef0;
        }
    }
    ctx->pc = 0x1ACEE8u;
label_1acee8:
    // 0x1acee8: 0x7220be28  paddub      $s7, $s1, $zero
    ctx->pc = 0x1acee8u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1aceec: 0x0  nop
    ctx->pc = 0x1aceecu;
    // NOP
label_1acef0:
    // 0x1acef0: 0x72e08e28  paddub      $s1, $s7, $zero
    ctx->pc = 0x1acef0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x1acef4: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1acef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1acef8: 0x90420d87  lbu         $v0, 0xD87($v0)
    ctx->pc = 0x1acef8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3463)));
    // 0x1acefc: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1acefcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1acf00: 0x111200  sll         $v0, $s1, 8
    ctx->pc = 0x1acf00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 8));
    // 0x1acf04: 0x511823  subu        $v1, $v0, $s1
    ctx->pc = 0x1acf04u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1acf08: 0x24021800  addiu       $v0, $zero, 0x1800
    ctx->pc = 0x1acf08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
    // 0x1acf0c: 0x3c02aaaa  lui         $v0, 0xAAAA
    ctx->pc = 0x1acf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43690 << 16));
    // 0x1acf10: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x1acf10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x1acf14: 0x430019  multu       $v0, $v1
    ctx->pc = 0x1acf14u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1acf18: 0x0  nop
    ctx->pc = 0x1acf18u;
    // NOP
    // 0x1acf1c: 0x0  nop
    ctx->pc = 0x1acf1cu;
    // NOP
    // 0x1acf20: 0x1010  mfhi        $v0
    ctx->pc = 0x1acf20u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1acf24: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x1acf24u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x1acf28: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x1acf28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1acf2c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1acf2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1acf30: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1acf30u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1acf34: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1acf34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1acf38: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x1acf38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x1acf3c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1acf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1acf40: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1acf40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1acf44: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1ACF44u;
    {
        const bool branch_taken_0x1acf44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1acf44) {
            ctx->pc = 0x1ACF68u;
            goto label_1acf68;
        }
    }
    ctx->pc = 0x1ACF4Cu;
    // 0x1acf4c: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x1acf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1acf50: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1acf50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1acf54: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x1acf54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1acf58: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x1acf58u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1acf5c: 0x24467d00  addiu       $a2, $v0, 0x7D00
    ctx->pc = 0x1acf5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32000));
    // 0x1acf60: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x1ACF60u;
    SET_GPR_U32(ctx, 31, 0x1ACF68u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x1ACF68u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1ACF68u) { return; }
    ctx->pc = 0x1ACF68u;
label_1acf68:
    // 0x1acf68: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1acf68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1acf6c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1acf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1acf70: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x1acf70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x1acf74: 0x72803628  paddub      $a2, $s4, $zero
    ctx->pc = 0x1acf74u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1acf78: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1ACF78u;
    SET_GPR_U32(ctx, 31, 0x1ACF80u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1ACF80u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1ACF80u) { return; }
    ctx->pc = 0x1ACF80u;
label_1acf80:
    // 0x1acf80: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x1acf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1acf84: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x1ACF84u;
    SET_GPR_U32(ctx, 31, 0x1ACF8Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x1ACF84u, 0x1ACF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACF8Cu;
label_1acf8c:
    // 0x1acf8c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1acf8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1acf90: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1acf90u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1acf94: 0x151040  sll         $v0, $s5, 1
    ctx->pc = 0x1acf94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x1acf98: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1acf98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1acf9c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1acf9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1acfa0: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1acfa0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1acfa4: 0xa423a4d0  sh          $v1, -0x5B30($at)
    ctx->pc = 0x1acfa4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294943952), (uint16_t)GPR_U32(ctx, 3));
    // 0x1acfa8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1acfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1acfac: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1acfacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1acfb0: 0x2445e510  addiu       $a1, $v0, -0x1AF0
    ctx->pc = 0x1acfb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960400));
    // 0x1acfb4: 0x72803628  paddub      $a2, $s4, $zero
    ctx->pc = 0x1acfb4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1acfb8: 0xc04f958  jal         func_13E560
    ctx->pc = 0x1ACFB8u;
    SET_GPR_U32(ctx, 31, 0x1ACFC0u);
    ctx->pc = 0x13E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E560u, 0x1ACFB8u, 0x1ACFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACFC0u;
label_1acfc0:
    // 0x1acfc0: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x1acfc0u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1acfc4: 0x32c2003f  andi        $v0, $s6, 0x3F
    ctx->pc = 0x1acfc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)63);
    // 0x1acfc8: 0x14400105  bnez        $v0, . + 4 + (0x105 << 2)
    ctx->pc = 0x1ACFC8u;
    {
        const bool branch_taken_0x1acfc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1acfc8) {
            ctx->pc = 0x1AD3E0u;
            goto label_1ad3e0;
        }
    }
    ctx->pc = 0x1ACFD0u;
    // 0x1acfd0: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x1acfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1acfd4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1acfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1acfd8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1acfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1acfdc: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x1acfdcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1acfe0: 0x24460d08  addiu       $a2, $v0, 0xD08
    ctx->pc = 0x1acfe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 3336));
    // 0x1acfe4: 0x24c67ff8  addiu       $a2, $a2, 0x7FF8
    ctx->pc = 0x1acfe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32760));
    // 0x1acfe8: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x1ACFE8u;
    SET_GPR_U32(ctx, 31, 0x1ACFF0u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x1ACFF0u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1ACFF0u) { return; }
    ctx->pc = 0x1ACFF0u;
label_1acff0:
    // 0x1acff0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1acff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1acff4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1acff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1acff8: 0x2445e510  addiu       $a1, $v0, -0x1AF0
    ctx->pc = 0x1acff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960400));
    // 0x1acffc: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1acffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ad000: 0xc04f958  jal         func_13E560
    ctx->pc = 0x1AD000u;
    SET_GPR_U32(ctx, 31, 0x1AD008u);
    ctx->pc = 0x13E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E560u, 0x1AD000u, 0x1AD008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD008u;
label_1ad008:
    // 0x1ad008: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x1ad008u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ad00c: 0x32c2003f  andi        $v0, $s6, 0x3F
    ctx->pc = 0x1ad00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)63);
    // 0x1ad010: 0x144000f3  bnez        $v0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x1AD010u;
    {
        const bool branch_taken_0x1ad010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad010) {
            ctx->pc = 0x1AD3E0u;
            goto label_1ad3e0;
        }
    }
    ctx->pc = 0x1AD018u;
    // 0x1ad018: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x1ad018u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1ad01c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1ad01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1ad020: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ad020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ad024: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1ad024u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1ad028: 0x8c32b490  lw          $s2, -0x4B70($at)
    ctx->pc = 0x1ad028u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294947984)));
    // 0x1ad02c: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x1ad02cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1ad030: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1ad030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1ad034: 0x244234b8  addiu       $v0, $v0, 0x34B8
    ctx->pc = 0x1ad034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13496));
    // 0x1ad038: 0x24427ff8  addiu       $v0, $v0, 0x7FF8
    ctx->pc = 0x1ad038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32760));
    // 0x1ad03c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1ad03cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ad040: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x1ad040u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x1ad044: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x1ad044u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1ad048: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1ad048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ad04c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1ad04cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ad050: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x1ad050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ad054: 0xc040c60  jal         func_103180
    ctx->pc = 0x1AD054u;
    SET_GPR_U32(ctx, 31, 0x1AD05Cu);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x1AD05Cu;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AD05Cu) { return; }
    ctx->pc = 0x1AD05Cu;
label_1ad05c:
    // 0x1ad05c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ad05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ad060: 0x12620045  beq         $s3, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1AD060u;
    {
        const bool branch_taken_0x1ad060 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ad060) {
            ctx->pc = 0x1AD178u;
            goto label_1ad178;
        }
    }
    ctx->pc = 0x1AD068u;
    // 0x1ad068: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ad068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ad06c: 0x1262002c  beq         $s3, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1AD06Cu;
    {
        const bool branch_taken_0x1ad06c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ad06c) {
            ctx->pc = 0x1AD120u;
            goto label_1ad120;
        }
    }
    ctx->pc = 0x1AD074u;
    // 0x1ad074: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ad074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad078: 0x12620013  beq         $s3, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AD078u;
    {
        const bool branch_taken_0x1ad078 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ad078) {
            ctx->pc = 0x1AD0C8u;
            goto label_1ad0c8;
        }
    }
    ctx->pc = 0x1AD080u;
    // 0x1ad080: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AD080u;
    {
        const bool branch_taken_0x1ad080 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad080) {
            ctx->pc = 0x1AD090u;
            goto label_1ad090;
        }
    }
    ctx->pc = 0x1AD088u;
    // 0x1ad088: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1AD088u;
    {
        const bool branch_taken_0x1ad088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad088) {
            ctx->pc = 0x1AD1C8u;
            goto label_1ad1c8;
        }
    }
    ctx->pc = 0x1AD090u;
label_1ad090:
    // 0x1ad090: 0x3c024406  lui         $v0, 0x4406
    ctx->pc = 0x1ad090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17414 << 16));
    // 0x1ad094: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x1ad094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x1ad098: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ad098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ad09c: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1ad09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ad0a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ad0a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ad0a4: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1ad0a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1ad0a8: 0x3c024411  lui         $v0, 0x4411
    ctx->pc = 0x1ad0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17425 << 16));
    // 0x1ad0ac: 0x34423334  ori         $v0, $v0, 0x3334
    ctx->pc = 0x1ad0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13108);
    // 0x1ad0b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ad0b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ad0b4: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1ad0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ad0b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ad0b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ad0bc: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1ad0bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1ad0c0: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1AD0C0u;
    {
        const bool branch_taken_0x1ad0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad0c0) {
            ctx->pc = 0x1AD1C8u;
            goto label_1ad1c8;
        }
    }
    ctx->pc = 0x1AD0C8u;
label_1ad0c8:
    // 0x1ad0c8: 0x3c024406  lui         $v0, 0x4406
    ctx->pc = 0x1ad0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17414 << 16));
    // 0x1ad0cc: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x1ad0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x1ad0d0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ad0d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ad0d4: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x1ad0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x1ad0d8: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1ad0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x1ad0dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ad0dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ad0e0: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1ad0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ad0e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ad0e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ad0e8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1ad0e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1ad0ec: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1ad0ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1ad0f0: 0x3c024411  lui         $v0, 0x4411
    ctx->pc = 0x1ad0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17425 << 16));
    // 0x1ad0f4: 0x34423334  ori         $v0, $v0, 0x3334
    ctx->pc = 0x1ad0f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13108);
    // 0x1ad0f8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ad0f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ad0fc: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x1ad0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x1ad100: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1ad100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x1ad104: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ad104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ad108: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1ad108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ad10c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ad10cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ad110: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1ad110u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1ad114: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1ad114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1ad118: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1AD118u;
    {
        const bool branch_taken_0x1ad118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad118) {
            ctx->pc = 0x1AD1C8u;
            goto label_1ad1c8;
        }
    }
    ctx->pc = 0x1AD120u;
label_1ad120:
    // 0x1ad120: 0x3c024486  lui         $v0, 0x4486
    ctx->pc = 0x1ad120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17542 << 16));
    // 0x1ad124: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x1ad124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x1ad128: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ad128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ad12c: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x1ad12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x1ad130: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1ad130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1ad134: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ad134u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ad138: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1ad138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ad13c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ad13cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ad140: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1ad140u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1ad144: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1ad144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1ad148: 0x3c024491  lui         $v0, 0x4491
    ctx->pc = 0x1ad148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17553 << 16));
    // 0x1ad14c: 0x34423334  ori         $v0, $v0, 0x3334
    ctx->pc = 0x1ad14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13108);
    // 0x1ad150: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ad150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ad154: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x1ad154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x1ad158: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1ad158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1ad15c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ad15cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ad160: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1ad160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ad164: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ad164u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ad168: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1ad168u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1ad16c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1ad16cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1ad170: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1AD170u;
    {
        const bool branch_taken_0x1ad170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad170) {
            ctx->pc = 0x1AD1C8u;
            goto label_1ad1c8;
        }
    }
    ctx->pc = 0x1AD178u;
label_1ad178:
    // 0x1ad178: 0x3c0244c9  lui         $v0, 0x44C9
    ctx->pc = 0x1ad178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17609 << 16));
    // 0x1ad17c: 0x34429999  ori         $v0, $v0, 0x9999
    ctx->pc = 0x1ad17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39321);
    // 0x1ad180: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ad180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ad184: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1ad184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1ad188: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1ad188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1ad18c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ad18cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ad190: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1ad190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ad194: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ad194u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ad198: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1ad198u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1ad19c: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1ad19cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1ad1a0: 0x3c0244d9  lui         $v0, 0x44D9
    ctx->pc = 0x1ad1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17625 << 16));
    // 0x1ad1a4: 0x3442cccc  ori         $v0, $v0, 0xCCCC
    ctx->pc = 0x1ad1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52428);
    // 0x1ad1a8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ad1a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ad1ac: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1ad1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1ad1b0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1ad1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1ad1b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ad1b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ad1b8: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1ad1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ad1bc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ad1bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ad1c0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1ad1c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1ad1c4: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1ad1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_1ad1c8:
    // 0x1ad1c8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1ad1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ad1cc: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1ad1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ad1d0: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x1AD1D0u;
    SET_GPR_U32(ctx, 31, 0x1AD1D8u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x1AD1D8u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AD1D8u) { return; }
    ctx->pc = 0x1AD1D8u;
label_1ad1d8:
    // 0x1ad1d8: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x1ad1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ad1dc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1ad1dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ad1e0: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x1ad1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x1ad1e4: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x1ad1e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1ad1e8: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x1ad1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1ad1ec: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1ad1ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ad1f0: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x1ad1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x1ad1f4: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x1ad1f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1ad1f8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1ad1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ad1fc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1ad1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1ad200: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x1ad200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x1ad204: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1ad204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ad208: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1AD208u;
    SET_GPR_U32(ctx, 31, 0x1AD210u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1AD210u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AD210u) { return; }
    ctx->pc = 0x1AD210u;
label_1ad210:
    // 0x1ad210: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1ad210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ad214: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1ad214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ad218: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x1ad218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ad21c: 0xc040c60  jal         func_103180
    ctx->pc = 0x1AD21Cu;
    SET_GPR_U32(ctx, 31, 0x1AD224u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x1AD224u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AD224u) { return; }
    ctx->pc = 0x1AD224u;
label_1ad224:
    // 0x1ad224: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ad224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ad228: 0x12620045  beq         $s3, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1AD228u;
    {
        const bool branch_taken_0x1ad228 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ad228) {
            ctx->pc = 0x1AD340u;
            goto label_1ad340;
        }
    }
    ctx->pc = 0x1AD230u;
    // 0x1ad230: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ad230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ad234: 0x1262002c  beq         $s3, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1AD234u;
    {
        const bool branch_taken_0x1ad234 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ad234) {
            ctx->pc = 0x1AD2E8u;
            goto label_1ad2e8;
        }
    }
    ctx->pc = 0x1AD23Cu;
    // 0x1ad23c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ad23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad240: 0x12620013  beq         $s3, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AD240u;
    {
        const bool branch_taken_0x1ad240 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ad240) {
            ctx->pc = 0x1AD290u;
            goto label_1ad290;
        }
    }
    ctx->pc = 0x1AD248u;
    // 0x1ad248: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AD248u;
    {
        const bool branch_taken_0x1ad248 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad248) {
            ctx->pc = 0x1AD258u;
            goto label_1ad258;
        }
    }
    ctx->pc = 0x1AD250u;
    // 0x1ad250: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1AD250u;
    {
        const bool branch_taken_0x1ad250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad250) {
            ctx->pc = 0x1AD390u;
            goto label_1ad390;
        }
    }
    ctx->pc = 0x1AD258u;
label_1ad258:
    // 0x1ad258: 0x3c024406  lui         $v0, 0x4406
    ctx->pc = 0x1ad258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17414 << 16));
    // 0x1ad25c: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x1ad25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x1ad260: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ad260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ad264: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1ad264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ad268: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ad268u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ad26c: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1ad26cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1ad270: 0x3c024411  lui         $v0, 0x4411
    ctx->pc = 0x1ad270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17425 << 16));
    // 0x1ad274: 0x34423334  ori         $v0, $v0, 0x3334
    ctx->pc = 0x1ad274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13108);
    // 0x1ad278: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ad278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ad27c: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1ad27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ad280: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ad280u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ad284: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1ad284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1ad288: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1AD288u;
    {
        const bool branch_taken_0x1ad288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad288) {
            ctx->pc = 0x1AD390u;
            goto label_1ad390;
        }
    }
    ctx->pc = 0x1AD290u;
label_1ad290:
    // 0x1ad290: 0x3c024406  lui         $v0, 0x4406
    ctx->pc = 0x1ad290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17414 << 16));
    // 0x1ad294: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x1ad294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x1ad298: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ad298u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ad29c: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x1ad29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x1ad2a0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1ad2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x1ad2a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ad2a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ad2a8: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1ad2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ad2ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ad2acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ad2b0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1ad2b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1ad2b4: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1ad2b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1ad2b8: 0x3c024411  lui         $v0, 0x4411
    ctx->pc = 0x1ad2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17425 << 16));
    // 0x1ad2bc: 0x34423334  ori         $v0, $v0, 0x3334
    ctx->pc = 0x1ad2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13108);
    // 0x1ad2c0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ad2c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ad2c4: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x1ad2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x1ad2c8: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1ad2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x1ad2cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ad2ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ad2d0: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1ad2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ad2d4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ad2d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ad2d8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1ad2d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1ad2dc: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1ad2dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1ad2e0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1AD2E0u;
    {
        const bool branch_taken_0x1ad2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad2e0) {
            ctx->pc = 0x1AD390u;
            goto label_1ad390;
        }
    }
    ctx->pc = 0x1AD2E8u;
label_1ad2e8:
    // 0x1ad2e8: 0x3c024486  lui         $v0, 0x4486
    ctx->pc = 0x1ad2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17542 << 16));
    // 0x1ad2ec: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x1ad2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x1ad2f0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ad2f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ad2f4: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x1ad2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x1ad2f8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1ad2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1ad2fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ad2fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ad300: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1ad300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ad304: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ad304u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ad308: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1ad308u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1ad30c: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1ad30cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1ad310: 0x3c024491  lui         $v0, 0x4491
    ctx->pc = 0x1ad310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17553 << 16));
    // 0x1ad314: 0x34423334  ori         $v0, $v0, 0x3334
    ctx->pc = 0x1ad314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13108);
    // 0x1ad318: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ad318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ad31c: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x1ad31cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x1ad320: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1ad320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1ad324: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ad324u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ad328: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1ad328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ad32c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ad32cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ad330: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1ad330u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1ad334: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1ad334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1ad338: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1AD338u;
    {
        const bool branch_taken_0x1ad338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad338) {
            ctx->pc = 0x1AD390u;
            goto label_1ad390;
        }
    }
    ctx->pc = 0x1AD340u;
label_1ad340:
    // 0x1ad340: 0x3c0244c9  lui         $v0, 0x44C9
    ctx->pc = 0x1ad340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17609 << 16));
    // 0x1ad344: 0x34429999  ori         $v0, $v0, 0x9999
    ctx->pc = 0x1ad344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39321);
    // 0x1ad348: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ad348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ad34c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1ad34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1ad350: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1ad350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1ad354: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ad354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ad358: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1ad358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ad35c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ad35cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ad360: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1ad360u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1ad364: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1ad364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1ad368: 0x3c0244d9  lui         $v0, 0x44D9
    ctx->pc = 0x1ad368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17625 << 16));
    // 0x1ad36c: 0x3442cccc  ori         $v0, $v0, 0xCCCC
    ctx->pc = 0x1ad36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52428);
    // 0x1ad370: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ad370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ad374: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1ad374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1ad378: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1ad378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1ad37c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ad37cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ad380: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1ad380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ad384: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ad384u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ad388: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1ad388u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1ad38c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1ad38cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_1ad390:
    // 0x1ad390: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1ad390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ad394: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1ad394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ad398: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x1AD398u;
    SET_GPR_U32(ctx, 31, 0x1AD3A0u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x1AD3A0u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AD3A0u) { return; }
    ctx->pc = 0x1AD3A0u;
label_1ad3a0:
    // 0x1ad3a0: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x1ad3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ad3a4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1ad3a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ad3a8: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x1ad3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x1ad3ac: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x1ad3acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1ad3b0: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x1ad3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1ad3b4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1ad3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1ad3b8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ad3b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ad3bc: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1ad3bcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1ad3c0: 0xac32b490  sw          $s2, -0x4B70($at)
    ctx->pc = 0x1ad3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294947984), GPR_U32(ctx, 18));
    // 0x1ad3c4: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x1ad3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x1ad3c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ad3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ad3cc: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x1ad3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
    // 0x1ad3d0: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x1ad3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x1ad3d4: 0x2c4103e8  sltiu       $at, $v0, 0x3E8
    ctx->pc = 0x1ad3d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1000) ? 1 : 0);
    // 0x1ad3d8: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AD3D8u;
    {
        const bool branch_taken_0x1ad3d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad3d8) {
            ctx->pc = 0x1AD3F8u;
            goto label_1ad3f8;
        }
    }
    ctx->pc = 0x1AD3E0u;
label_1ad3e0:
    // 0x1ad3e0: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1ad3e0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1ad3e4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1ad3e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1ad3e8:
    // 0x1ad3e8: 0x2ea207d0  sltiu       $v0, $s5, 0x7D0
    ctx->pc = 0x1ad3e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)2000) ? 1 : 0);
    // 0x1ad3ec: 0x1440fe98  bnez        $v0, . + 4 + (-0x168 << 2)
    ctx->pc = 0x1AD3ECu;
    {
        const bool branch_taken_0x1ad3ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad3ec) {
            ctx->pc = 0x1ACE50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ace50;
        }
    }
    ctx->pc = 0x1AD3F4u;
    // 0x1ad3f4: 0x0  nop
    ctx->pc = 0x1ad3f4u;
    // NOP
label_1ad3f8:
    // 0x1ad3f8: 0xc06b5fc  jal         func_1AD7F0
    ctx->pc = 0x1AD3F8u;
    SET_GPR_U32(ctx, 31, 0x1AD400u);
    ctx->pc = 0x1AD7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD7F0u, 0x1AD3F8u, 0x1AD400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD400u;
label_1ad400:
    // 0x1ad400: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1ad400u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ad404: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1ad404u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ad408: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1ad408u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ad40c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1ad40cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ad410: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1ad410u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ad414: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ad414u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad418: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ad418u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ad41c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ad41cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ad420: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ad420u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad424: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ad424u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ad428: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x1ad428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1ad42c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD42Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD42Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD434u;
}
