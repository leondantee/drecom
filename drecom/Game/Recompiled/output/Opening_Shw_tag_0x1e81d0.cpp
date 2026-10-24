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

// Function: Opening_Shw_tag
// Address: 0x1e81d0 - 0x1e8378
void Opening_Shw_tag_0x1e81d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Opening_Shw_tag_0x1e81d0");
#endif

    ctx->pc = 0x1e81d0u;

    // 0x1e81d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e81d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e81d4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x1e81d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x1e81d8: 0x3c028003  lui         $v0, 0x8003
    ctx->pc = 0x1e81d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32771 << 16));
    // 0x1e81dc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1e81dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1e81e0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e81e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e81e4: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x1e81e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1e81e8: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1e81e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e81ec: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1e81ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e81f0: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1e81f0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1e81f4: 0x3402e551  ori         $v0, $zero, 0xE551
    ctx->pc = 0x1e81f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58705);
    // 0x1e81f8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1e81f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1e81fc: 0x3443eeee  ori         $v1, $v0, 0xEEEE
    ctx->pc = 0x1e81fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61166);
    // 0x1e8200: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1e8200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e8204: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1e8204u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1e8208: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1e8208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e820c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e820cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e8210: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1e8210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1e8214: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1e8214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e8218: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x1e8218u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x1e821c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1e821cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1e8220: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1e8220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e8224: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1e8224u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1e8228: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1e8228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e822c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e822cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e8230: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1e8230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1e8234: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e8234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e8238: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1e8238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e823c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1e823cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1e8240: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x1e8240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1e8244: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1e8244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e8248: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1e8248u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1e824c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1e824cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e8250: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e8250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e8254: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1e8254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1e8258: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1e8258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1e825c: 0x344300a0  ori         $v1, $v0, 0xA0
    ctx->pc = 0x1e825cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)160);
    // 0x1e8260: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1e8260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e8264: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1e8264u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1e8268: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x1e8268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x1e826c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1e826cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e8270: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1e8270u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1e8274: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1e8274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e8278: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e8278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e827c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1e827cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1e8280: 0x24031003  addiu       $v1, $zero, 0x1003
    ctx->pc = 0x1e8280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4099));
    // 0x1e8284: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1e8284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e8288: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1e8288u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1e828c: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x1e828cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1e8290: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1e8290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e8294: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1e8294u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1e8298: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1e8298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e829c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e829cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e82a0: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1e82a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1e82a4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e82a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e82a8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e82a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e82ac: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e82acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e82b0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1e82b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e82b4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1e82b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e82b8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1e82b8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1e82bc: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1e82bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e82c0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1e82c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e82c4: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1e82c4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1e82c8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1e82c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e82cc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e82ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e82d0: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1e82d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1e82d4: 0x24027900  addiu       $v0, $zero, 0x7900
    ctx->pc = 0x1e82d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1e82d8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e82d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e82dc: 0x24027000  addiu       $v0, $zero, 0x7000
    ctx->pc = 0x1e82dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1e82e0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1e82e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e82e4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1e82e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e82e8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1e82e8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1e82ec: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1e82ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1e82f0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1e82f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1e82f4: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x1e82f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1e82f8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1e82f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e82fc: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1e82fcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1e8300: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1e8300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e8304: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e8304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e8308: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1e8308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1e830c: 0x34028700  ori         $v0, $zero, 0x8700
    ctx->pc = 0x1e830cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
    // 0x1e8310: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e8310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e8314: 0x34029000  ori         $v0, $zero, 0x9000
    ctx->pc = 0x1e8314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    // 0x1e8318: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1e8318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e831c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1e831cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e8320: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1e8320u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1e8324: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1e8324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1e8328: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1e8328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1e832c: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x1e832cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1e8330: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1e8330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e8334: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1e8334u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1e8338: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1e8338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e833c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e833cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e8340: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1e8340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1e8344: 0x3c030007  lui         $v1, 0x7
    ctx->pc = 0x1e8344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7 << 16));
    // 0x1e8348: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1e8348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e834c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1e834cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1e8350: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x1e8350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1e8354: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1e8354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e8358: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1e8358u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1e835c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1e835cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e8360: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e8360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e8364: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1e8364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1e8368: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1e8368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e836c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1e836cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e8370: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8378u;
}
