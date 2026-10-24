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

// Function: Set_effect_em05_denki01
// Address: 0x2edb00 - 0x2edef4
void Set_effect_em05_denki01_0x2edb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_em05_denki01_0x2edb00");
#endif

    switch (ctx->pc) {
        case 0x2edb00u: goto label_2edb00;
        case 0x2edb04u: goto label_2edb04;
        case 0x2edb08u: goto label_2edb08;
        case 0x2edb0cu: goto label_2edb0c;
        case 0x2edb10u: goto label_2edb10;
        case 0x2edb14u: goto label_2edb14;
        case 0x2edb18u: goto label_2edb18;
        case 0x2edb1cu: goto label_2edb1c;
        case 0x2edb20u: goto label_2edb20;
        case 0x2edb24u: goto label_2edb24;
        case 0x2edb28u: goto label_2edb28;
        case 0x2edb2cu: goto label_2edb2c;
        case 0x2edb30u: goto label_2edb30;
        case 0x2edb34u: goto label_2edb34;
        case 0x2edb38u: goto label_2edb38;
        case 0x2edb3cu: goto label_2edb3c;
        case 0x2edb40u: goto label_2edb40;
        case 0x2edb44u: goto label_2edb44;
        case 0x2edb48u: goto label_2edb48;
        case 0x2edb4cu: goto label_2edb4c;
        case 0x2edb50u: goto label_2edb50;
        case 0x2edb54u: goto label_2edb54;
        case 0x2edb58u: goto label_2edb58;
        case 0x2edb5cu: goto label_2edb5c;
        case 0x2edb60u: goto label_2edb60;
        case 0x2edb64u: goto label_2edb64;
        case 0x2edb68u: goto label_2edb68;
        case 0x2edb6cu: goto label_2edb6c;
        case 0x2edb70u: goto label_2edb70;
        case 0x2edb74u: goto label_2edb74;
        case 0x2edb78u: goto label_2edb78;
        case 0x2edb7cu: goto label_2edb7c;
        case 0x2edb80u: goto label_2edb80;
        case 0x2edb84u: goto label_2edb84;
        case 0x2edb88u: goto label_2edb88;
        case 0x2edb8cu: goto label_2edb8c;
        case 0x2edb90u: goto label_2edb90;
        case 0x2edb94u: goto label_2edb94;
        case 0x2edb98u: goto label_2edb98;
        case 0x2edb9cu: goto label_2edb9c;
        case 0x2edba0u: goto label_2edba0;
        case 0x2edba4u: goto label_2edba4;
        case 0x2edba8u: goto label_2edba8;
        case 0x2edbacu: goto label_2edbac;
        case 0x2edbb0u: goto label_2edbb0;
        case 0x2edbb4u: goto label_2edbb4;
        case 0x2edbb8u: goto label_2edbb8;
        case 0x2edbbcu: goto label_2edbbc;
        case 0x2edbc0u: goto label_2edbc0;
        case 0x2edbc4u: goto label_2edbc4;
        case 0x2edbc8u: goto label_2edbc8;
        case 0x2edbccu: goto label_2edbcc;
        case 0x2edbd0u: goto label_2edbd0;
        case 0x2edbd4u: goto label_2edbd4;
        case 0x2edbd8u: goto label_2edbd8;
        case 0x2edbdcu: goto label_2edbdc;
        case 0x2edbe0u: goto label_2edbe0;
        case 0x2edbe4u: goto label_2edbe4;
        case 0x2edbe8u: goto label_2edbe8;
        case 0x2edbecu: goto label_2edbec;
        case 0x2edbf0u: goto label_2edbf0;
        case 0x2edbf4u: goto label_2edbf4;
        case 0x2edbf8u: goto label_2edbf8;
        case 0x2edbfcu: goto label_2edbfc;
        case 0x2edc00u: goto label_2edc00;
        case 0x2edc04u: goto label_2edc04;
        case 0x2edc08u: goto label_2edc08;
        case 0x2edc0cu: goto label_2edc0c;
        case 0x2edc10u: goto label_2edc10;
        case 0x2edc14u: goto label_2edc14;
        case 0x2edc18u: goto label_2edc18;
        case 0x2edc1cu: goto label_2edc1c;
        case 0x2edc20u: goto label_2edc20;
        case 0x2edc24u: goto label_2edc24;
        case 0x2edc28u: goto label_2edc28;
        case 0x2edc2cu: goto label_2edc2c;
        case 0x2edc30u: goto label_2edc30;
        case 0x2edc34u: goto label_2edc34;
        case 0x2edc38u: goto label_2edc38;
        case 0x2edc3cu: goto label_2edc3c;
        case 0x2edc40u: goto label_2edc40;
        case 0x2edc44u: goto label_2edc44;
        case 0x2edc48u: goto label_2edc48;
        case 0x2edc4cu: goto label_2edc4c;
        case 0x2edc50u: goto label_2edc50;
        case 0x2edc54u: goto label_2edc54;
        case 0x2edc58u: goto label_2edc58;
        case 0x2edc5cu: goto label_2edc5c;
        case 0x2edc60u: goto label_2edc60;
        case 0x2edc64u: goto label_2edc64;
        case 0x2edc68u: goto label_2edc68;
        case 0x2edc6cu: goto label_2edc6c;
        case 0x2edc70u: goto label_2edc70;
        case 0x2edc74u: goto label_2edc74;
        case 0x2edc78u: goto label_2edc78;
        case 0x2edc7cu: goto label_2edc7c;
        case 0x2edc80u: goto label_2edc80;
        case 0x2edc84u: goto label_2edc84;
        case 0x2edc88u: goto label_2edc88;
        case 0x2edc8cu: goto label_2edc8c;
        case 0x2edc90u: goto label_2edc90;
        case 0x2edc94u: goto label_2edc94;
        case 0x2edc98u: goto label_2edc98;
        case 0x2edc9cu: goto label_2edc9c;
        case 0x2edca0u: goto label_2edca0;
        case 0x2edca4u: goto label_2edca4;
        case 0x2edca8u: goto label_2edca8;
        case 0x2edcacu: goto label_2edcac;
        case 0x2edcb0u: goto label_2edcb0;
        case 0x2edcb4u: goto label_2edcb4;
        case 0x2edcb8u: goto label_2edcb8;
        case 0x2edcbcu: goto label_2edcbc;
        case 0x2edcc0u: goto label_2edcc0;
        case 0x2edcc4u: goto label_2edcc4;
        case 0x2edcc8u: goto label_2edcc8;
        case 0x2edcccu: goto label_2edccc;
        case 0x2edcd0u: goto label_2edcd0;
        case 0x2edcd4u: goto label_2edcd4;
        case 0x2edcd8u: goto label_2edcd8;
        case 0x2edcdcu: goto label_2edcdc;
        case 0x2edce0u: goto label_2edce0;
        case 0x2edce4u: goto label_2edce4;
        case 0x2edce8u: goto label_2edce8;
        case 0x2edcecu: goto label_2edcec;
        case 0x2edcf0u: goto label_2edcf0;
        case 0x2edcf4u: goto label_2edcf4;
        case 0x2edcf8u: goto label_2edcf8;
        case 0x2edcfcu: goto label_2edcfc;
        case 0x2edd00u: goto label_2edd00;
        case 0x2edd04u: goto label_2edd04;
        case 0x2edd08u: goto label_2edd08;
        case 0x2edd0cu: goto label_2edd0c;
        case 0x2edd10u: goto label_2edd10;
        case 0x2edd14u: goto label_2edd14;
        case 0x2edd18u: goto label_2edd18;
        case 0x2edd1cu: goto label_2edd1c;
        case 0x2edd20u: goto label_2edd20;
        case 0x2edd24u: goto label_2edd24;
        case 0x2edd28u: goto label_2edd28;
        case 0x2edd2cu: goto label_2edd2c;
        case 0x2edd30u: goto label_2edd30;
        case 0x2edd34u: goto label_2edd34;
        case 0x2edd38u: goto label_2edd38;
        case 0x2edd3cu: goto label_2edd3c;
        case 0x2edd40u: goto label_2edd40;
        case 0x2edd44u: goto label_2edd44;
        case 0x2edd48u: goto label_2edd48;
        case 0x2edd4cu: goto label_2edd4c;
        case 0x2edd50u: goto label_2edd50;
        case 0x2edd54u: goto label_2edd54;
        case 0x2edd58u: goto label_2edd58;
        case 0x2edd5cu: goto label_2edd5c;
        case 0x2edd60u: goto label_2edd60;
        case 0x2edd64u: goto label_2edd64;
        case 0x2edd68u: goto label_2edd68;
        case 0x2edd6cu: goto label_2edd6c;
        case 0x2edd70u: goto label_2edd70;
        case 0x2edd74u: goto label_2edd74;
        case 0x2edd78u: goto label_2edd78;
        case 0x2edd7cu: goto label_2edd7c;
        case 0x2edd80u: goto label_2edd80;
        case 0x2edd84u: goto label_2edd84;
        case 0x2edd88u: goto label_2edd88;
        case 0x2edd8cu: goto label_2edd8c;
        case 0x2edd90u: goto label_2edd90;
        case 0x2edd94u: goto label_2edd94;
        case 0x2edd98u: goto label_2edd98;
        case 0x2edd9cu: goto label_2edd9c;
        case 0x2edda0u: goto label_2edda0;
        case 0x2edda4u: goto label_2edda4;
        case 0x2edda8u: goto label_2edda8;
        case 0x2eddacu: goto label_2eddac;
        case 0x2eddb0u: goto label_2eddb0;
        case 0x2eddb4u: goto label_2eddb4;
        case 0x2eddb8u: goto label_2eddb8;
        case 0x2eddbcu: goto label_2eddbc;
        case 0x2eddc0u: goto label_2eddc0;
        case 0x2eddc4u: goto label_2eddc4;
        case 0x2eddc8u: goto label_2eddc8;
        case 0x2eddccu: goto label_2eddcc;
        case 0x2eddd0u: goto label_2eddd0;
        case 0x2eddd4u: goto label_2eddd4;
        case 0x2eddd8u: goto label_2eddd8;
        case 0x2edddcu: goto label_2edddc;
        case 0x2edde0u: goto label_2edde0;
        case 0x2edde4u: goto label_2edde4;
        case 0x2edde8u: goto label_2edde8;
        case 0x2eddecu: goto label_2eddec;
        case 0x2eddf0u: goto label_2eddf0;
        case 0x2eddf4u: goto label_2eddf4;
        case 0x2eddf8u: goto label_2eddf8;
        case 0x2eddfcu: goto label_2eddfc;
        case 0x2ede00u: goto label_2ede00;
        case 0x2ede04u: goto label_2ede04;
        case 0x2ede08u: goto label_2ede08;
        case 0x2ede0cu: goto label_2ede0c;
        case 0x2ede10u: goto label_2ede10;
        case 0x2ede14u: goto label_2ede14;
        case 0x2ede18u: goto label_2ede18;
        case 0x2ede1cu: goto label_2ede1c;
        case 0x2ede20u: goto label_2ede20;
        case 0x2ede24u: goto label_2ede24;
        case 0x2ede28u: goto label_2ede28;
        case 0x2ede2cu: goto label_2ede2c;
        case 0x2ede30u: goto label_2ede30;
        case 0x2ede34u: goto label_2ede34;
        case 0x2ede38u: goto label_2ede38;
        case 0x2ede3cu: goto label_2ede3c;
        case 0x2ede40u: goto label_2ede40;
        case 0x2ede44u: goto label_2ede44;
        case 0x2ede48u: goto label_2ede48;
        case 0x2ede4cu: goto label_2ede4c;
        case 0x2ede50u: goto label_2ede50;
        case 0x2ede54u: goto label_2ede54;
        case 0x2ede58u: goto label_2ede58;
        case 0x2ede5cu: goto label_2ede5c;
        case 0x2ede60u: goto label_2ede60;
        case 0x2ede64u: goto label_2ede64;
        case 0x2ede68u: goto label_2ede68;
        case 0x2ede6cu: goto label_2ede6c;
        case 0x2ede70u: goto label_2ede70;
        case 0x2ede74u: goto label_2ede74;
        case 0x2ede78u: goto label_2ede78;
        case 0x2ede7cu: goto label_2ede7c;
        case 0x2ede80u: goto label_2ede80;
        case 0x2ede84u: goto label_2ede84;
        case 0x2ede88u: goto label_2ede88;
        case 0x2ede8cu: goto label_2ede8c;
        case 0x2ede90u: goto label_2ede90;
        case 0x2ede94u: goto label_2ede94;
        case 0x2ede98u: goto label_2ede98;
        case 0x2ede9cu: goto label_2ede9c;
        case 0x2edea0u: goto label_2edea0;
        case 0x2edea4u: goto label_2edea4;
        case 0x2edea8u: goto label_2edea8;
        case 0x2edeacu: goto label_2edeac;
        case 0x2edeb0u: goto label_2edeb0;
        case 0x2edeb4u: goto label_2edeb4;
        case 0x2edeb8u: goto label_2edeb8;
        case 0x2edebcu: goto label_2edebc;
        case 0x2edec0u: goto label_2edec0;
        case 0x2edec4u: goto label_2edec4;
        case 0x2edec8u: goto label_2edec8;
        case 0x2edeccu: goto label_2edecc;
        case 0x2eded0u: goto label_2eded0;
        case 0x2eded4u: goto label_2eded4;
        case 0x2eded8u: goto label_2eded8;
        case 0x2ededcu: goto label_2ededc;
        case 0x2edee0u: goto label_2edee0;
        case 0x2edee4u: goto label_2edee4;
        case 0x2edee8u: goto label_2edee8;
        case 0x2edeecu: goto label_2edeec;
        case 0x2edef0u: goto label_2edef0;
        default: break;
    }

    ctx->pc = 0x2edb00u;

label_2edb00:
    // 0x2edb00: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2edb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_2edb04:
    // 0x2edb04: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x2edb04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
label_2edb08:
    // 0x2edb08: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2edb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2edb0c:
    // 0x2edb0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2edb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2edb10:
    // 0x2edb10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2edb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2edb14:
    // 0x2edb14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2edb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2edb18:
    // 0x2edb18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2edb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2edb1c:
    // 0x2edb1c: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x2edb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
label_2edb20:
    // 0x2edb20: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x2edb20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
label_2edb24:
    // 0x2edb24: 0xafa60088  sw          $a2, 0x88($sp)
    ctx->pc = 0x2edb24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 6));
label_2edb28:
    // 0x2edb28: 0xafa70090  sw          $a3, 0x90($sp)
    ctx->pc = 0x2edb28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 7));
label_2edb2c:
    // 0x2edb2c: 0xafa80098  sw          $t0, 0x98($sp)
    ctx->pc = 0x2edb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 8));
label_2edb30:
    // 0x2edb30: 0xafa900a0  sw          $t1, 0xA0($sp)
    ctx->pc = 0x2edb30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 9));
label_2edb34:
    // 0x2edb34: 0xe7ac00a8  swc1        $f12, 0xA8($sp)
    ctx->pc = 0x2edb34u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_2edb38:
    // 0x2edb38: 0xe7ad00b0  swc1        $f13, 0xB0($sp)
    ctx->pc = 0x2edb38u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_2edb3c:
    // 0x2edb3c: 0xe7ae00b8  swc1        $f14, 0xB8($sp)
    ctx->pc = 0x2edb3cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_2edb40:
    // 0x2edb40: 0xafaa00c0  sw          $t2, 0xC0($sp)
    ctx->pc = 0x2edb40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 10));
label_2edb44:
    // 0x2edb44: 0xa3ab00c8  sb          $t3, 0xC8($sp)
    ctx->pc = 0x2edb44u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 200), (uint8_t)GPR_U32(ctx, 11));
label_2edb48:
    // 0x2edb48: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x2edb48u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2edb4c:
    // 0x2edb4c: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x2edb4cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2edb50:
    // 0x2edb50: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2edb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_2edb54:
    // 0x2edb54: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_2edb58:
    if (ctx->pc == 0x2EDB58u) {
        ctx->pc = 0x2EDB5Cu;
        goto label_2edb5c;
    }
    ctx->pc = 0x2EDB54u;
    {
        const bool branch_taken_0x2edb54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2edb54) {
            ctx->pc = 0x2EDB84u;
            goto label_2edb84;
        }
    }
    ctx->pc = 0x2EDB5Cu;
label_2edb5c:
    // 0x2edb5c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2edb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2edb60:
    // 0x2edb60: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2edb64:
    if (ctx->pc == 0x2EDB64u) {
        ctx->pc = 0x2EDB68u;
        goto label_2edb68;
    }
    ctx->pc = 0x2EDB60u;
    {
        const bool branch_taken_0x2edb60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2edb60) {
            ctx->pc = 0x2EDB74u;
            goto label_2edb74;
        }
    }
    ctx->pc = 0x2EDB68u;
label_2edb68:
    // 0x2edb68: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2edb68u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2edb6c:
    // 0x2edb6c: 0x1000000e  b           . + 4 + (0xE << 2)
label_2edb70:
    if (ctx->pc == 0x2EDB70u) {
        ctx->pc = 0x2EDB74u;
        goto label_2edb74;
    }
    ctx->pc = 0x2EDB6Cu;
    {
        const bool branch_taken_0x2edb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edb6c) {
            ctx->pc = 0x2EDBA8u;
            goto label_2edba8;
        }
    }
    ctx->pc = 0x2EDB74u;
label_2edb74:
    // 0x2edb74: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2edb74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2edb78:
    // 0x2edb78: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2edb78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2edb7c:
    // 0x2edb7c: 0x1000000a  b           . + 4 + (0xA << 2)
label_2edb80:
    if (ctx->pc == 0x2EDB80u) {
        ctx->pc = 0x2EDB84u;
        goto label_2edb84;
    }
    ctx->pc = 0x2EDB7Cu;
    {
        const bool branch_taken_0x2edb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edb7c) {
            ctx->pc = 0x2EDBA8u;
            goto label_2edba8;
        }
    }
    ctx->pc = 0x2EDB84u;
label_2edb84:
    // 0x2edb84: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2edb84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2edb88:
    // 0x2edb88: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2edb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2edb8c:
    // 0x2edb8c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2edb90:
    if (ctx->pc == 0x2EDB90u) {
        ctx->pc = 0x2EDB94u;
        goto label_2edb94;
    }
    ctx->pc = 0x2EDB8Cu;
    {
        const bool branch_taken_0x2edb8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2edb8c) {
            ctx->pc = 0x2EDBA0u;
            goto label_2edba0;
        }
    }
    ctx->pc = 0x2EDB94u;
label_2edb94:
    // 0x2edb94: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x2edb94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2edb98:
    // 0x2edb98: 0x10000003  b           . + 4 + (0x3 << 2)
label_2edb9c:
    if (ctx->pc == 0x2EDB9Cu) {
        ctx->pc = 0x2EDBA0u;
        goto label_2edba0;
    }
    ctx->pc = 0x2EDB98u;
    {
        const bool branch_taken_0x2edb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edb98) {
            ctx->pc = 0x2EDBA8u;
            goto label_2edba8;
        }
    }
    ctx->pc = 0x2EDBA0u;
label_2edba0:
    // 0x2edba0: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x2edba0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2edba4:
    // 0x2edba4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2edba4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2edba8:
    // 0x2edba8: 0x2414000b  addiu       $s4, $zero, 0xB
    ctx->pc = 0x2edba8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2edbac:
    // 0x2edbac: 0x93a200c8  lbu         $v0, 0xC8($sp)
    ctx->pc = 0x2edbacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 200)));
label_2edbb0:
    // 0x2edbb0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2edbb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2edbb4:
    // 0x2edbb4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2edbb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2edbb8:
    // 0x2edbb8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2edbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2edbbc:
    // 0x2edbbc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2edbbcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2edbc0:
    // 0x2edbc0: 0x21a38  dsll        $v1, $v0, 8
    ctx->pc = 0x2edbc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 8);
label_2edbc4:
    // 0x2edbc4: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x2edbc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_2edbc8:
    // 0x2edbc8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2edbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2edbcc:
    // 0x2edbcc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2edbccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2edbd0:
    // 0x2edbd0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x2edbd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2edbd4:
    // 0x2edbd4: 0x32220003  andi        $v0, $s1, 0x3
    ctx->pc = 0x2edbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
label_2edbd8:
    // 0x2edbd8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2edbd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2edbdc:
    // 0x2edbdc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2edbdcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2edbe0:
    // 0x2edbe0: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2edbe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_2edbe4:
    // 0x2edbe4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x2edbe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2edbe8:
    // 0x2edbe8: 0x3c023c00  lui         $v0, 0x3C00
    ctx->pc = 0x2edbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15360 << 16));
label_2edbec:
    // 0x2edbec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2edbecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2edbf0:
    // 0x2edbf0: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x2edbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_2edbf4:
    // 0x2edbf4: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x2edbf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_2edbf8:
    // 0x2edbf8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2edbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2edbfc:
    // 0x2edbfc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2edbfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2edc00:
    // 0x2edc00: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2edc00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_2edc04:
    // 0x2edc04: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2edc04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2edc08:
    // 0x2edc08: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x2edc08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2edc0c:
    // 0x2edc0c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2edc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2edc10:
    // 0x2edc10: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2edc10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2edc14:
    // 0x2edc14: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2edc14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2edc18:
    // 0x2edc18: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2edc18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2edc1c:
    // 0x2edc1c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2edc1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2edc20:
    // 0x2edc20: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2edc20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2edc24:
    // 0x2edc24: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2edc24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2edc28:
    // 0x2edc28: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2edc28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
label_2edc2c:
    // 0x2edc2c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2edc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2edc30:
    // 0x2edc30: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2edc30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2edc34:
    // 0x2edc34: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2edc34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2edc38:
    // 0x2edc38: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2edc38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2edc3c:
    // 0x2edc3c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2edc3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2edc40:
    // 0x2edc40: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2edc40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2edc44:
    // 0x2edc44: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2edc44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2edc48:
    // 0x2edc48: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2edc48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_2edc4c:
    // 0x2edc4c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2edc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_2edc50:
    // 0x2edc50: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2edc50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2edc54:
    // 0x2edc54: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2edc54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2edc58:
    // 0x2edc58: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2edc58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2edc5c:
    // 0x2edc5c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2edc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2edc60:
    // 0x2edc60: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2edc60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2edc64:
    // 0x2edc64: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2edc64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2edc68:
    // 0x2edc68: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x2edc68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
label_2edc6c:
    // 0x2edc6c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2edc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2edc70:
    // 0x2edc70: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2edc70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2edc74:
    // 0x2edc74: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2edc74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2edc78:
    // 0x2edc78: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2edc78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2edc7c:
    // 0x2edc7c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2edc7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2edc80:
    // 0x2edc80: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2edc80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2edc84:
    // 0x2edc84: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2edc84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2edc88:
    // 0x2edc88: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2edc88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_2edc8c:
    // 0x2edc8c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2edc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2edc90:
    // 0x2edc90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2edc90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2edc94:
    // 0x2edc94: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2edc94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2edc98:
    // 0x2edc98: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2edc98u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2edc9c:
    // 0x2edc9c: 0x21a38  dsll        $v1, $v0, 8
    ctx->pc = 0x2edc9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 8);
label_2edca0:
    // 0x2edca0: 0x3c02000e  lui         $v0, 0xE
    ctx->pc = 0x2edca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14 << 16));
label_2edca4:
    // 0x2edca4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2edca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2edca8:
    // 0x2edca8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x2edca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2edcac:
    // 0x2edcac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2edcacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2edcb0:
    // 0x2edcb0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2edcb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2edcb4:
    // 0x2edcb4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2edcb4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2edcb8:
    // 0x2edcb8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2edcb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2edcbc:
    // 0x2edcbc: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2edcbcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
label_2edcc0:
    // 0x2edcc0: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2edcc0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
label_2edcc4:
    // 0x2edcc4: 0xc0634c8  jal         func_18D320
label_2edcc8:
    if (ctx->pc == 0x2EDCC8u) {
        ctx->pc = 0x2EDCCCu;
        goto label_2edccc;
    }
    ctx->pc = 0x2EDCC4u;
    SET_GPR_U32(ctx, 31, 0x2EDCCCu);
    ctx->pc = 0x18D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D320u, 0x2EDCC4u, 0x2EDCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDCCCu;
label_2edccc:
    // 0x2edccc: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2edcccu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2edcd0:
    // 0x2edcd0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2edcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_2edcd4:
    // 0x2edcd4: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2edcd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
label_2edcd8:
    // 0x2edcd8: 0x1203007b  beq         $s0, $v1, . + 4 + (0x7B << 2)
label_2edcdc:
    if (ctx->pc == 0x2EDCDCu) {
        ctx->pc = 0x2EDCE0u;
        goto label_2edce0;
    }
    ctx->pc = 0x2EDCD8u;
    {
        const bool branch_taken_0x2edcd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2edcd8) {
            ctx->pc = 0x2EDEC8u;
            goto label_2edec8;
        }
    }
    ctx->pc = 0x2EDCE0u;
label_2edce0:
    // 0x2edce0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2edce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2edce4:
    // 0x2edce4: 0xa20202aa  sb          $v0, 0x2AA($s0)
    ctx->pc = 0x2edce4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 682), (uint8_t)GPR_U32(ctx, 2));
label_2edce8:
    // 0x2edce8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2edce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_2edcec:
    // 0x2edcec: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2edcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_2edcf0:
    // 0x2edcf0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2edcf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2edcf4:
    // 0x2edcf4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2edcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2edcf8:
    // 0x2edcf8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2edcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2edcfc:
    // 0x2edcfc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2edcfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2edd00:
    // 0x2edd00: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2edd00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_2edd04:
    // 0x2edd04: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2edd04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_2edd08:
    // 0x2edd08: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2edd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_2edd0c:
    // 0x2edd0c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2edd0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2edd10:
    // 0x2edd10: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2edd10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2edd14:
    // 0x2edd14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2edd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2edd18:
    // 0x2edd18: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2edd18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
label_2edd1c:
    // 0x2edd1c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2edd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_2edd20:
    // 0x2edd20: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2edd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2edd24:
    // 0x2edd24: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2edd24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_2edd28:
    // 0x2edd28: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2edd28u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29960), GPR_U32(ctx, 2));
label_2edd2c:
    // 0x2edd2c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2edd2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2edd30:
    // 0x2edd30: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2edd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2edd34:
    // 0x2edd34: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x2edd34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_2edd38:
    // 0x2edd38: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x2edd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_2edd3c:
    // 0x2edd3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2edd3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2edd40:
    // 0x2edd40: 0xa2020290  sb          $v0, 0x290($s0)
    ctx->pc = 0x2edd40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 656), (uint8_t)GPR_U32(ctx, 2));
label_2edd44:
    // 0x2edd44: 0xae0002ac  sw          $zero, 0x2AC($s0)
    ctx->pc = 0x2edd44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 0));
label_2edd48:
    // 0x2edd48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2edd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2edd4c:
    // 0x2edd4c: 0xa20202a8  sb          $v0, 0x2A8($s0)
    ctx->pc = 0x2edd4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 680), (uint8_t)GPR_U32(ctx, 2));
label_2edd50:
    // 0x2edd50: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2edd50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2edd54:
    // 0x2edd54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2edd54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2edd58:
    // 0x2edd58: 0x0  nop
    ctx->pc = 0x2edd58u;
    // NOP
label_2edd5c:
    // 0x2edd5c: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x2edd5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
label_2edd60:
    // 0x2edd60: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2edd60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2edd64:
    // 0x2edd64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2edd64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2edd68:
    // 0x2edd68: 0x0  nop
    ctx->pc = 0x2edd68u;
    // NOP
label_2edd6c:
    // 0x2edd6c: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x2edd6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
label_2edd70:
    // 0x2edd70: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2edd70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2edd74:
    // 0x2edd74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2edd74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2edd78:
    // 0x2edd78: 0x0  nop
    ctx->pc = 0x2edd78u;
    // NOP
label_2edd7c:
    // 0x2edd7c: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x2edd7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
label_2edd80:
    // 0x2edd80: 0x3c0242d8  lui         $v0, 0x42D8
    ctx->pc = 0x2edd80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17112 << 16));
label_2edd84:
    // 0x2edd84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2edd84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2edd88:
    // 0x2edd88: 0x0  nop
    ctx->pc = 0x2edd88u;
    // NOP
label_2edd8c:
    // 0x2edd8c: 0xe60002dc  swc1        $f0, 0x2DC($s0)
    ctx->pc = 0x2edd8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 732), bits); }
label_2edd90:
    // 0x2edd90: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x2edd90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_2edd94:
    // 0x2edd94: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2edd94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2edd98:
    // 0x2edd98: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2edd98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2edd9c:
    // 0x2edd9c: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x2edd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2edda0:
    // 0x2edda0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2edda0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2edda4:
    // 0x2edda4: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x2edda4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
label_2edda8:
    // 0x2edda8: 0x3c024060  lui         $v0, 0x4060
    ctx->pc = 0x2edda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16480 << 16));
label_2eddac:
    // 0x2eddac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eddacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2eddb0:
    // 0x2eddb0: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x2eddb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2eddb4:
    // 0x2eddb4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2eddb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2eddb8:
    // 0x2eddb8: 0xe600033c  swc1        $f0, 0x33C($s0)
    ctx->pc = 0x2eddb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 828), bits); }
label_2eddbc:
    // 0x2eddbc: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2eddbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2eddc0:
    // 0x2eddc0: 0xe6000270  swc1        $f0, 0x270($s0)
    ctx->pc = 0x2eddc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 624), bits); }
label_2eddc4:
    // 0x2eddc4: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2eddc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2eddc8:
    // 0x2eddc8: 0xe6000274  swc1        $f0, 0x274($s0)
    ctx->pc = 0x2eddc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 628), bits); }
label_2eddcc:
    // 0x2eddcc: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2eddccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2eddd0:
    // 0x2eddd0: 0xe6000278  swc1        $f0, 0x278($s0)
    ctx->pc = 0x2eddd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 632), bits); }
label_2eddd4:
    // 0x2eddd4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2eddd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2eddd8:
    // 0x2eddd8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2eddd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2edddc:
    // 0x2edddc: 0xe6000280  swc1        $f0, 0x280($s0)
    ctx->pc = 0x2edddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 640), bits); }
label_2edde0:
    // 0x2edde0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2edde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2edde4:
    // 0x2edde4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2edde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2edde8:
    // 0x2edde8: 0xe6000284  swc1        $f0, 0x284($s0)
    ctx->pc = 0x2edde8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
label_2eddec:
    // 0x2eddec: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2eddecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2eddf0:
    // 0x2eddf0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2eddf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2eddf4:
    // 0x2eddf4: 0xe6000288  swc1        $f0, 0x288($s0)
    ctx->pc = 0x2eddf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 648), bits); }
label_2eddf8:
    // 0x2eddf8: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x2eddf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2eddfc:
    // 0x2eddfc: 0xe60002a4  swc1        $f0, 0x2A4($s0)
    ctx->pc = 0x2eddfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 676), bits); }
label_2ede00:
    // 0x2ede00: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2ede00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2ede04:
    // 0x2ede04: 0xa202034f  sb          $v0, 0x34F($s0)
    ctx->pc = 0x2ede04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 847), (uint8_t)GPR_U32(ctx, 2));
label_2ede08:
    // 0x2ede08: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2ede08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_2ede0c:
    // 0x2ede0c: 0xae020364  sw          $v0, 0x364($s0)
    ctx->pc = 0x2ede0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 2));
label_2ede10:
    // 0x2ede10: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2ede10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_2ede14:
    // 0x2ede14: 0x8e020350  lw          $v0, 0x350($s0)
    ctx->pc = 0x2ede14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 848)));
label_2ede18:
    // 0x2ede18: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2ede18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2ede1c:
    // 0x2ede1c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2ede1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_2ede20:
    // 0x2ede20: 0x24426e10  addiu       $v0, $v0, 0x6E10
    ctx->pc = 0x2ede20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28176));
label_2ede24:
    // 0x2ede24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ede24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ede28:
    // 0x2ede28: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ede28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ede2c:
    // 0x2ede2c: 0x40f809  jalr        $v0
label_2ede30:
    if (ctx->pc == 0x2EDE30u) {
        ctx->pc = 0x2EDE34u;
        goto label_2ede34;
    }
    ctx->pc = 0x2EDE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EDE34u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDE2Cu, 0x2EDE34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EDE34u;
label_2ede34:
    // 0x2ede34: 0x8e030ab8  lw          $v1, 0xAB8($s0)
    ctx->pc = 0x2ede34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2744)));
label_2ede38:
    // 0x2ede38: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ede38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2ede3c:
    // 0x2ede3c: 0xae030ab8  sw          $v1, 0xAB8($s0)
    ctx->pc = 0x2ede3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2744), GPR_U32(ctx, 3));
label_2ede40:
    // 0x2ede40: 0x93a300c8  lbu         $v1, 0xC8($sp)
    ctx->pc = 0x2ede40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 200)));
label_2ede44:
    // 0x2ede44: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2ede44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2ede48:
    // 0x2ede48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ede48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ede4c:
    // 0x2ede4c: 0x14830020  bne         $a0, $v1, . + 4 + (0x20 << 2)
label_2ede50:
    if (ctx->pc == 0x2EDE50u) {
        ctx->pc = 0x2EDE54u;
        goto label_2ede54;
    }
    ctx->pc = 0x2EDE4Cu;
    {
        const bool branch_taken_0x2ede4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ede4c) {
            ctx->pc = 0x2EDED0u;
            goto label_2eded0;
        }
    }
    ctx->pc = 0x2EDE54u;
label_2ede54:
    // 0x2ede54: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x2ede54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2ede58:
    // 0x2ede58: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2ede58u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2ede5c:
    // 0x2ede5c: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x2ede5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2ede60:
    // 0x2ede60: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2ede60u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_2ede64:
    // 0x2ede64: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2ede64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ede68:
    // 0x2ede68: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x2ede68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_2ede6c:
    // 0x2ede6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ede6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ede70:
    // 0x2ede70: 0x0  nop
    ctx->pc = 0x2ede70u;
    // NOP
label_2ede74:
    // 0x2ede74: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ede74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2ede78:
    // 0x2ede78: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2ede78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_2ede7c:
    // 0x2ede7c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2ede7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_2ede80:
    // 0x2ede80: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_2ede84:
    if (ctx->pc == 0x2EDE84u) {
        ctx->pc = 0x2EDE88u;
        goto label_2ede88;
    }
    ctx->pc = 0x2EDE80u;
    {
        const bool branch_taken_0x2ede80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ede80) {
            ctx->pc = 0x2EDED0u;
            goto label_2eded0;
        }
    }
    ctx->pc = 0x2EDE88u;
label_2ede88:
    // 0x2ede88: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ede88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2ede8c:
    // 0x2ede8c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2ede8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ede90:
    // 0x2ede90: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x2ede90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
label_2ede94:
    // 0x2ede94: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x2ede94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
label_2ede98:
    // 0x2ede98: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2ede98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2ede9c:
    // 0x2ede9c: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x2ede9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
label_2edea0:
    // 0x2edea0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2edea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_2edea4:
    // 0x2edea4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2edea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2edea8:
    // 0x2edea8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2edea8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2edeac:
    // 0x2edeac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2edeacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2edeb0:
    // 0x2edeb0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2edeb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2edeb4:
    // 0x2edeb4: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x2edeb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2edeb8:
    // 0x2edeb8: 0xc086488  jal         func_219220
label_2edebc:
    if (ctx->pc == 0x2EDEBCu) {
        ctx->pc = 0x2EDEC0u;
        goto label_2edec0;
    }
    ctx->pc = 0x2EDEB8u;
    SET_GPR_U32(ctx, 31, 0x2EDEC0u);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x2EDEB8u, 0x2EDEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDEC0u;
label_2edec0:
    // 0x2edec0: 0x10000003  b           . + 4 + (0x3 << 2)
label_2edec4:
    if (ctx->pc == 0x2EDEC4u) {
        ctx->pc = 0x2EDEC8u;
        goto label_2edec8;
    }
    ctx->pc = 0x2EDEC0u;
    {
        const bool branch_taken_0x2edec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edec0) {
            ctx->pc = 0x2EDED0u;
            goto label_2eded0;
        }
    }
    ctx->pc = 0x2EDEC8u;
label_2edec8:
    // 0x2edec8: 0x10000001  b           . + 4 + (0x1 << 2)
label_2edecc:
    if (ctx->pc == 0x2EDECCu) {
        ctx->pc = 0x2EDED0u;
        goto label_2eded0;
    }
    ctx->pc = 0x2EDEC8u;
    {
        const bool branch_taken_0x2edec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edec8) {
            ctx->pc = 0x2EDED0u;
            goto label_2eded0;
        }
    }
    ctx->pc = 0x2EDED0u;
label_2eded0:
    // 0x2eded0: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x2eded0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2eded4:
    // 0x2eded4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2eded4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2eded8:
    // 0x2eded8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2eded8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ededc:
    // 0x2ededc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ededcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2edee0:
    // 0x2edee0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2edee0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2edee4:
    // 0x2edee4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2edee4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2edee8:
    // 0x2edee8: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x2edee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2edeec:
    // 0x2edeec: 0x3e00008  jr          $ra
label_2edef0:
    if (ctx->pc == 0x2EDEF0u) {
        ctx->pc = 0x2EDEF4u;
        goto label_fallthrough_0x2edeec;
    }
    ctx->pc = 0x2EDEECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDEECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2edeec:
    ctx->pc = 0x2EDEF4u;
}
