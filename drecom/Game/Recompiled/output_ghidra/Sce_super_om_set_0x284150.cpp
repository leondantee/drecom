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

// Function: Sce_super_om_set
// Address: 0x284150 - 0x284478
void Sce_super_om_set_0x284150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Sce_super_om_set_0x284150");
#endif

    ctx->pc = 0x284150u;

    // 0x284150: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x284150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x284154: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x284154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x284158: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x284158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x28415c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x28415cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x284160: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x284160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x284164: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x284164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x284168: 0xafa80038  sw          $t0, 0x38($sp)
    ctx->pc = 0x284168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 8));
    // 0x28416c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x28416cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x284170: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x284170u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x284174: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x284174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x284178: 0x2463e650  addiu       $v1, $v1, -0x19B0
    ctx->pc = 0x284178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960720));
    // 0x28417c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28417cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x284180: 0x8c701390  lw          $s0, 0x1390($v1)
    ctx->pc = 0x284180u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5008)));
    // 0x284184: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x284184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x284188: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x284188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28418c: 0x10830092  beq         $a0, $v1, . + 4 + (0x92 << 2)
    ctx->pc = 0x28418Cu;
    {
        const bool branch_taken_0x28418c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x28418c) {
            ctx->pc = 0x2843D8u;
            goto label_2843d8;
        }
    }
    ctx->pc = 0x284194u;
    // 0x284194: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x284194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x284198: 0x1083006d  beq         $a0, $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x284198u;
    {
        const bool branch_taken_0x284198 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x284198) {
            ctx->pc = 0x284350u;
            goto label_284350;
        }
    }
    ctx->pc = 0x2841A0u;
    // 0x2841a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2841a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2841a4: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2841A4u;
    {
        const bool branch_taken_0x2841a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2841a4) {
            ctx->pc = 0x2841D8u;
            goto label_2841d8;
        }
    }
    ctx->pc = 0x2841ACu;
    // 0x2841ac: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2841ACu;
    {
        const bool branch_taken_0x2841ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2841ac) {
            ctx->pc = 0x2841BCu;
            goto label_2841bc;
        }
    }
    ctx->pc = 0x2841B4u;
    // 0x2841b4: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x2841B4u;
    {
        const bool branch_taken_0x2841b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2841b4) {
            ctx->pc = 0x284458u;
            goto label_284458;
        }
    }
    ctx->pc = 0x2841BCu;
label_2841bc:
    // 0x2841bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2841bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2841c0: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x2841c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x2841c4: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x2841c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x2841c8: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x2841c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
    // 0x2841cc: 0xae001334  sw          $zero, 0x1334($s0)
    ctx->pc = 0x2841ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4916), GPR_U32(ctx, 0));
    // 0x2841d0: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x2841D0u;
    {
        const bool branch_taken_0x2841d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2841d0) {
            ctx->pc = 0x284458u;
            goto label_284458;
        }
    }
    ctx->pc = 0x2841D8u;
label_2841d8:
    // 0x2841d8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2841d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2841dc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2841dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2841e0: 0x10830047  beq         $a0, $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x2841E0u;
    {
        const bool branch_taken_0x2841e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2841e0) {
            ctx->pc = 0x284300u;
            goto label_284300;
        }
    }
    ctx->pc = 0x2841E8u;
    // 0x2841e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2841e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2841ec: 0x10830030  beq         $a0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x2841ECu;
    {
        const bool branch_taken_0x2841ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2841ec) {
            ctx->pc = 0x2842B0u;
            goto label_2842b0;
        }
    }
    ctx->pc = 0x2841F4u;
    // 0x2841f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2841f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2841f8: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2841F8u;
    {
        const bool branch_taken_0x2841f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2841f8) {
            ctx->pc = 0x284260u;
            goto label_284260;
        }
    }
    ctx->pc = 0x284200u;
    // 0x284200: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x284200u;
    {
        const bool branch_taken_0x284200 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x284200) {
            ctx->pc = 0x284210u;
            goto label_284210;
        }
    }
    ctx->pc = 0x284208u;
    // 0x284208: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x284208u;
    {
        const bool branch_taken_0x284208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x284208) {
            ctx->pc = 0x284458u;
            goto label_284458;
        }
    }
    ctx->pc = 0x284210u;
label_284210:
    // 0x284210: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x284210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x284214: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x284214u;
    {
        const bool branch_taken_0x284214 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x284214) {
            ctx->pc = 0x284230u;
            goto label_284230;
        }
    }
    ctx->pc = 0x28421Cu;
    // 0x28421c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x28421cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x284220: 0x2463dca0  addiu       $v1, $v1, -0x2360
    ctx->pc = 0x284220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958240));
    // 0x284224: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x284224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
    // 0x284228: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x284228u;
    {
        const bool branch_taken_0x284228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x284228) {
            ctx->pc = 0x28424Cu;
            goto label_28424c;
        }
    }
    ctx->pc = 0x284230u;
label_284230:
    // 0x284230: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x284230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x284234: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x284234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x284238: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x284238u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x28423c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x28423cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x284240: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x284240u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x284244: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x284244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x284248: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x284248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
label_28424c:
    // 0x28424c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x28424cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x284250: 0x2463dbc0  addiu       $v1, $v1, -0x2440
    ctx->pc = 0x284250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x284254: 0xae031334  sw          $v1, 0x1334($s0)
    ctx->pc = 0x284254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4916), GPR_U32(ctx, 3));
    // 0x284258: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x284258u;
    {
        const bool branch_taken_0x284258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x284258) {
            ctx->pc = 0x284458u;
            goto label_284458;
        }
    }
    ctx->pc = 0x284260u;
label_284260:
    // 0x284260: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x284260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x284264: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x284264u;
    {
        const bool branch_taken_0x284264 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x284264) {
            ctx->pc = 0x284280u;
            goto label_284280;
        }
    }
    ctx->pc = 0x28426Cu;
    // 0x28426c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x28426cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x284270: 0x2463b7e0  addiu       $v1, $v1, -0x4820
    ctx->pc = 0x284270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948832));
    // 0x284274: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x284274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
    // 0x284278: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x284278u;
    {
        const bool branch_taken_0x284278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x284278) {
            ctx->pc = 0x28429Cu;
            goto label_28429c;
        }
    }
    ctx->pc = 0x284280u;
label_284280:
    // 0x284280: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x284280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x284284: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x284284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x284288: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x284288u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x28428c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x28428cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x284290: 0x8c23b830  lw          $v1, -0x47D0($at)
    ctx->pc = 0x284290u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EB830u));
    // 0x284294: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x284294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x284298: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x284298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
label_28429c:
    // 0x28429c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x28429cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x2842a0: 0x2463b700  addiu       $v1, $v1, -0x4900
    ctx->pc = 0x2842a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948608));
    // 0x2842a4: 0xae031334  sw          $v1, 0x1334($s0)
    ctx->pc = 0x2842a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4916), GPR_U32(ctx, 3));
    // 0x2842a8: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x2842A8u;
    {
        const bool branch_taken_0x2842a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2842a8) {
            ctx->pc = 0x284458u;
            goto label_284458;
        }
    }
    ctx->pc = 0x2842B0u;
label_2842b0:
    // 0x2842b0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2842b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2842b4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2842B4u;
    {
        const bool branch_taken_0x2842b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2842b4) {
            ctx->pc = 0x2842D0u;
            goto label_2842d0;
        }
    }
    ctx->pc = 0x2842BCu;
    // 0x2842bc: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x2842bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x2842c0: 0x2463a580  addiu       $v1, $v1, -0x5A80
    ctx->pc = 0x2842c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944128));
    // 0x2842c4: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x2842c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
    // 0x2842c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2842C8u;
    {
        const bool branch_taken_0x2842c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2842c8) {
            ctx->pc = 0x2842ECu;
            goto label_2842ec;
        }
    }
    ctx->pc = 0x2842D0u;
label_2842d0:
    // 0x2842d0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2842d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2842d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2842d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2842d8: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x2842d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2842dc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2842dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2842e0: 0x8c23a5d0  lw          $v1, -0x5A30($at)
    ctx->pc = 0x2842e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x2842e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2842e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2842e8: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x2842e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
label_2842ec:
    // 0x2842ec: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x2842ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x2842f0: 0x2463a4a0  addiu       $v1, $v1, -0x5B60
    ctx->pc = 0x2842f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943904));
    // 0x2842f4: 0xae031334  sw          $v1, 0x1334($s0)
    ctx->pc = 0x2842f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4916), GPR_U32(ctx, 3));
    // 0x2842f8: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x2842F8u;
    {
        const bool branch_taken_0x2842f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2842f8) {
            ctx->pc = 0x284458u;
            goto label_284458;
        }
    }
    ctx->pc = 0x284300u;
label_284300:
    // 0x284300: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x284300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x284304: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x284304u;
    {
        const bool branch_taken_0x284304 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x284304) {
            ctx->pc = 0x284320u;
            goto label_284320;
        }
    }
    ctx->pc = 0x28430Cu;
    // 0x28430c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x28430cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x284310: 0x24639320  addiu       $v1, $v1, -0x6CE0
    ctx->pc = 0x284310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939424));
    // 0x284314: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x284314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
    // 0x284318: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x284318u;
    {
        const bool branch_taken_0x284318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x284318) {
            ctx->pc = 0x28433Cu;
            goto label_28433c;
        }
    }
    ctx->pc = 0x284320u;
label_284320:
    // 0x284320: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x284320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x284324: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x284324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x284328: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x284328u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x28432c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x28432cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x284330: 0x8c239370  lw          $v1, -0x6C90($at)
    ctx->pc = 0x284330u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E9370u));
    // 0x284334: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x284334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x284338: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x284338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
label_28433c:
    // 0x28433c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x28433cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x284340: 0x24639240  addiu       $v1, $v1, -0x6DC0
    ctx->pc = 0x284340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939200));
    // 0x284344: 0xae031334  sw          $v1, 0x1334($s0)
    ctx->pc = 0x284344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4916), GPR_U32(ctx, 3));
    // 0x284348: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x284348u;
    {
        const bool branch_taken_0x284348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x284348) {
            ctx->pc = 0x284458u;
            goto label_284458;
        }
    }
    ctx->pc = 0x284350u;
label_284350:
    // 0x284350: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x284350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x284354: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x284354u;
    {
        const bool branch_taken_0x284354 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x284354) {
            ctx->pc = 0x284384u;
            goto label_284384;
        }
    }
    ctx->pc = 0x28435Cu;
    // 0x28435c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x28435cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x284360: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x284360u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x284364: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x284364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x284368: 0x2463bb40  addiu       $v1, $v1, -0x44C0
    ctx->pc = 0x284368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949696));
    // 0x28436c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28436cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x284370: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x284370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x284374: 0x246300e0  addiu       $v1, $v1, 0xE0
    ctx->pc = 0x284374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x284378: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x284378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
    // 0x28437c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x28437Cu;
    {
        const bool branch_taken_0x28437c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28437c) {
            ctx->pc = 0x2843B4u;
            goto label_2843b4;
        }
    }
    ctx->pc = 0x284384u;
label_284384:
    // 0x284384: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x284384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x284388: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x284388u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28438c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x28438cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x284390: 0x2463bb40  addiu       $v1, $v1, -0x44C0
    ctx->pc = 0x284390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949696));
    // 0x284394: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x284394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x284398: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x284398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x28439c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x28439cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2843a0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2843a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2843a4: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x2843a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2843a8: 0x8ca30130  lw          $v1, 0x130($a1)
    ctx->pc = 0x2843a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x2843ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2843acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2843b0: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x2843b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
label_2843b4:
    // 0x2843b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2843b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2843b8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2843b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2843bc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2843bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2843c0: 0x2463bb40  addiu       $v1, $v1, -0x44C0
    ctx->pc = 0x2843c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949696));
    // 0x2843c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2843c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2843c8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2843c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2843cc: 0xae031334  sw          $v1, 0x1334($s0)
    ctx->pc = 0x2843ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4916), GPR_U32(ctx, 3));
    // 0x2843d0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2843D0u;
    {
        const bool branch_taken_0x2843d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2843d0) {
            ctx->pc = 0x284458u;
            goto label_284458;
        }
    }
    ctx->pc = 0x2843D8u;
label_2843d8:
    // 0x2843d8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2843d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2843dc: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2843DCu;
    {
        const bool branch_taken_0x2843dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2843dc) {
            ctx->pc = 0x28440Cu;
            goto label_28440c;
        }
    }
    ctx->pc = 0x2843E4u;
    // 0x2843e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2843e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2843e8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2843e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2843ec: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x2843ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x2843f0: 0x2463e650  addiu       $v1, $v1, -0x19B0
    ctx->pc = 0x2843f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960720));
    // 0x2843f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2843f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2843f8: 0x8c631390  lw          $v1, 0x1390($v1)
    ctx->pc = 0x2843f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5008)));
    // 0x2843fc: 0x246300e0  addiu       $v1, $v1, 0xE0
    ctx->pc = 0x2843fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x284400: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x284400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
    // 0x284404: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x284404u;
    {
        const bool branch_taken_0x284404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x284404) {
            ctx->pc = 0x28443Cu;
            goto label_28443c;
        }
    }
    ctx->pc = 0x28440Cu;
label_28440c:
    // 0x28440c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x28440cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x284410: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x284410u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x284414: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x284414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x284418: 0x2463e650  addiu       $v1, $v1, -0x19B0
    ctx->pc = 0x284418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960720));
    // 0x28441c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28441cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x284420: 0x8c651390  lw          $a1, 0x1390($v1)
    ctx->pc = 0x284420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5008)));
    // 0x284424: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x284424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x284428: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x284428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28442c: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x28442cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x284430: 0x8ca30130  lw          $v1, 0x130($a1)
    ctx->pc = 0x284430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x284434: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x284434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x284438: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x284438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
label_28443c:
    // 0x28443c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x28443cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x284440: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x284440u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x284444: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x284444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x284448: 0x2463e650  addiu       $v1, $v1, -0x19B0
    ctx->pc = 0x284448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960720));
    // 0x28444c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28444cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x284450: 0x8c631390  lw          $v1, 0x1390($v1)
    ctx->pc = 0x284450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5008)));
    // 0x284454: 0xae031334  sw          $v1, 0x1334($s0)
    ctx->pc = 0x284454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4916), GPR_U32(ctx, 3));
label_284458:
    // 0x284458: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x284458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x28445c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x28445cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x284460: 0x26030120  addiu       $v1, $s0, 0x120
    ctx->pc = 0x284460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x284464: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x284464u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x284468: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x284468u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28446c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x28446cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x284470: 0x3e00008  jr          $ra
    ctx->pc = 0x284470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284478u;
}
