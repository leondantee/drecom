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

// Function: Em07_R1_br_tail_wait
// Address: 0x2d6200 - 0x2d6448
void Em07_R1_br_tail_wait_0x2d6200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em07_R1_br_tail_wait_0x2d6200");
#endif

    ctx->pc = 0x2d6200u;

    // 0x2d6200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d6200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d6204: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2d6204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2d6208: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2d6208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d620c: 0x8c831334  lw          $v1, 0x1334($a0)
    ctx->pc = 0x2d620cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4916)));
    // 0x2d6210: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d6210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d6214: 0xac831334  sw          $v1, 0x1334($a0)
    ctx->pc = 0x2d6214u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4916), GPR_U32(ctx, 3));
    // 0x2d6218: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d6218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d621c: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2d621cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2d6220: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2d6220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d6224: 0x8c631334  lw          $v1, 0x1334($v1)
    ctx->pc = 0x2d6224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x2d6228: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2d6228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2d622c: 0x14600065  bnez        $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x2D622Cu;
    {
        const bool branch_taken_0x2d622c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d622c) {
            ctx->pc = 0x2D63C4u;
            goto label_2d63c4;
        }
    }
    ctx->pc = 0x2D6234u;
    // 0x2d6234: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d6234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d6238: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2d6238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2d623c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2d623cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d6240: 0x8c631334  lw          $v1, 0x1334($v1)
    ctx->pc = 0x2d6240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x2d6244: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2d6244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2d6248: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D6248u;
    {
        const bool branch_taken_0x2d6248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6248) {
            ctx->pc = 0x2D6298u;
            goto label_2d6298;
        }
    }
    ctx->pc = 0x2D6250u;
    // 0x2d6250: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d6250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d6254: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2d6254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2d6258: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2d6258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d625c: 0x8c831334  lw          $v1, 0x1334($a0)
    ctx->pc = 0x2d625cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4916)));
    // 0x2d6260: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x2d6260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x2d6264: 0xac831334  sw          $v1, 0x1334($a0)
    ctx->pc = 0x2d6264u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4916), GPR_U32(ctx, 3));
    // 0x2d6268: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d6268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d626c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d626cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d6270: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d6270u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d6274: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2d6274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d6278: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d6278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d627c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d627cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d6280: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d6280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d6284: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d6284u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d6288: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d6288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d628c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d628cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d6290: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d6290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d6294: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d6294u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2d6298:
    // 0x2d6298: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d6298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d629c: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2d629cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2d62a0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2d62a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d62a4: 0x8c631334  lw          $v1, 0x1334($v1)
    ctx->pc = 0x2d62a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x2d62a8: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x2d62a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2d62ac: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D62ACu;
    {
        const bool branch_taken_0x2d62ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d62ac) {
            ctx->pc = 0x2D62FCu;
            goto label_2d62fc;
        }
    }
    ctx->pc = 0x2D62B4u;
    // 0x2d62b4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d62b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d62b8: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2d62b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2d62bc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2d62bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d62c0: 0x8c831334  lw          $v1, 0x1334($a0)
    ctx->pc = 0x2d62c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4916)));
    // 0x2d62c4: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x2d62c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x2d62c8: 0xac831334  sw          $v1, 0x1334($a0)
    ctx->pc = 0x2d62c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4916), GPR_U32(ctx, 3));
    // 0x2d62cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d62ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d62d0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d62d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d62d4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d62d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d62d8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2d62d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d62dc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d62dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d62e0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d62e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d62e4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d62e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d62e8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d62e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d62ec: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d62ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d62f0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d62f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d62f4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d62f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d62f8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d62f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2d62fc:
    // 0x2d62fc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d62fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d6300: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2d6300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2d6304: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2d6304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d6308: 0x8c631334  lw          $v1, 0x1334($v1)
    ctx->pc = 0x2d6308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x2d630c: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x2d630cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2d6310: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D6310u;
    {
        const bool branch_taken_0x2d6310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6310) {
            ctx->pc = 0x2D6360u;
            goto label_2d6360;
        }
    }
    ctx->pc = 0x2D6318u;
    // 0x2d6318: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d6318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d631c: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2d631cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2d6320: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2d6320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d6324: 0x8c831334  lw          $v1, 0x1334($a0)
    ctx->pc = 0x2d6324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4916)));
    // 0x2d6328: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x2d6328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x2d632c: 0xac831334  sw          $v1, 0x1334($a0)
    ctx->pc = 0x2d632cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4916), GPR_U32(ctx, 3));
    // 0x2d6330: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d6330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6334: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d6334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d6338: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d6338u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d633c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2d633cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2d6340: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d6340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d6344: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d6344u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d6348: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d6348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d634c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d634cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d6350: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d6350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d6354: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d6354u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d6358: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d6358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d635c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d635cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2d6360:
    // 0x2d6360: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d6360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d6364: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2d6364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2d6368: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2d6368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d636c: 0x8c631334  lw          $v1, 0x1334($v1)
    ctx->pc = 0x2d636cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x2d6370: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x2d6370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x2d6374: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D6374u;
    {
        const bool branch_taken_0x2d6374 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6374) {
            ctx->pc = 0x2D63C4u;
            goto label_2d63c4;
        }
    }
    ctx->pc = 0x2D637Cu;
    // 0x2d637c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d637cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d6380: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2d6380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2d6384: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2d6384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d6388: 0x8c831334  lw          $v1, 0x1334($a0)
    ctx->pc = 0x2d6388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4916)));
    // 0x2d638c: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x2d638cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x2d6390: 0xac831334  sw          $v1, 0x1334($a0)
    ctx->pc = 0x2d6390u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4916), GPR_U32(ctx, 3));
    // 0x2d6394: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d6394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6398: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d6398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d639c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d639cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d63a0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2d63a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2d63a4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d63a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d63a8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d63a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d63ac: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d63acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d63b0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d63b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d63b4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d63b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d63b8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d63b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d63bc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d63bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d63c0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d63c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2d63c4:
    // 0x2d63c4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d63c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d63c8: 0x8c631334  lw          $v1, 0x1334($v1)
    ctx->pc = 0x2d63c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x2d63cc: 0x2c6101f5  sltiu       $at, $v1, 0x1F5
    ctx->pc = 0x2d63ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)501) ? 1 : 0);
    // 0x2d63d0: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x2D63D0u;
    {
        const bool branch_taken_0x2d63d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d63d0) {
            ctx->pc = 0x2D643Cu;
            goto label_2d643c;
        }
    }
    ctx->pc = 0x2D63D8u;
    // 0x2d63d8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d63d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d63dc: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2d63dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2d63e0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2d63e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d63e4: 0x8c831334  lw          $v1, 0x1334($a0)
    ctx->pc = 0x2d63e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4916)));
    // 0x2d63e8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x2d63e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x2d63ec: 0xac831334  sw          $v1, 0x1334($a0)
    ctx->pc = 0x2d63ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4916), GPR_U32(ctx, 3));
    // 0x2d63f0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d63f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d63f4: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2d63f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2d63f8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2d63f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d63fc: 0x8ca41334  lw          $a0, 0x1334($a1)
    ctx->pc = 0x2d63fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4916)));
    // 0x2d6400: 0x2403ff05  addiu       $v1, $zero, -0xFB
    ctx->pc = 0x2d6400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967045));
    // 0x2d6404: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d6404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d6408: 0xaca31334  sw          $v1, 0x1334($a1)
    ctx->pc = 0x2d6408u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4916), GPR_U32(ctx, 3));
    // 0x2d640c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d640cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6410: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d6410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d6414: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d6414u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d6418: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d6418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d641c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d641cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d6420: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d6420u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d6424: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d6424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d6428: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d6428u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d642c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d642cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d6430: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d6430u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d6434: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d6434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d6438: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d6438u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2d643c:
    // 0x2d643c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2d643cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d6440: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6448u;
}
