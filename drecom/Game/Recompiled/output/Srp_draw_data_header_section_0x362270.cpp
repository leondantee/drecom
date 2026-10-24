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

// Function: Srp_draw_data_header_section
// Address: 0x362270 - 0x362468
void Srp_draw_data_header_section_0x362270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Srp_draw_data_header_section_0x362270");
#endif

    ctx->pc = 0x362270u;

    // 0x362270: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x362270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x362274: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x362274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x362278: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x362278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x36227c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x36227cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x362280: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x362280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x362284: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x362284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362288: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x362288u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x36228c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x36228cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x362290: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x362290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x362294: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x362294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x362298: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x362298u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x36229c: 0x3c020eee  lui         $v0, 0xEEE
    ctx->pc = 0x36229cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3822 << 16));
    // 0x3622a0: 0x3444eeee  ori         $a0, $v0, 0xEEEE
    ctx->pc = 0x3622a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61166);
    // 0x3622a4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x3622a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3622a8: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x3622a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x3622ac: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x3622acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x3622b0: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x3622b0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x3622b4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3622b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3622b8: 0xdc440a90  ld          $a0, 0xA90($v0)
    ctx->pc = 0x3622b8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 2704)));
    // 0x3622bc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x3622bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3622c0: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x3622c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x3622c4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x3622c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x3622c8: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x3622c8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x3622cc: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x3622ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3622d0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x3622d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3622d4: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x3622d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x3622d8: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x3622d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x3622dc: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x3622dcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x3622e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3622e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3622e4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3622e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3622e8: 0x3c020a00  lui         $v0, 0xA00
    ctx->pc = 0x3622e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2560 << 16));
    // 0x3622ec: 0x34420070  ori         $v0, $v0, 0x70
    ctx->pc = 0x3622ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x3622f0: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x3622f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3622f4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x3622f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3622f8: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x3622f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x3622fc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x3622fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x362300: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x362300u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x362304: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x362304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x362308: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x362308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36230c: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x36230cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x362310: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x362310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x362314: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x362314u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x362318: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x362318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36231c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x36231cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x362320: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x362320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x362324: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x362324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x362328: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x362328u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x36232c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x36232cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x362330: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x362330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x362334: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x362334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x362338: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x362338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x36233c: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x36233cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x362340: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x362340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x362344: 0xdc440a98  ld          $a0, 0xA98($v0)
    ctx->pc = 0x362344u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 2712)));
    // 0x362348: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x362348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36234c: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x36234cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x362350: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x362350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x362354: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x362354u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x362358: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x362358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x36235c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x36235cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x362360: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x362360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x362364: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x362364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x362368: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x362368u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x36236c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x36236cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x362370: 0xdc440aa0  ld          $a0, 0xAA0($v0)
    ctx->pc = 0x362370u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 2720)));
    // 0x362374: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x362374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x362378: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x362378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x36237c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x36237cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x362380: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x362380u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x362384: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x362384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x362388: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x362388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36238c: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x36238cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x362390: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x362390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x362394: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x362394u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x362398: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x362398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36239c: 0xdc440ab0  ld          $a0, 0xAB0($v0)
    ctx->pc = 0x36239cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 2736)));
    // 0x3623a0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x3623a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3623a4: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x3623a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x3623a8: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x3623a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x3623ac: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x3623acu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x3623b0: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x3623b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x3623b4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x3623b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3623b8: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x3623b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x3623bc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x3623bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x3623c0: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x3623c0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x3623c4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3623c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3623c8: 0xdc440aa8  ld          $a0, 0xAA8($v0)
    ctx->pc = 0x3623c8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 2728)));
    // 0x3623cc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x3623ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3623d0: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x3623d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x3623d4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x3623d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x3623d8: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x3623d8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x3623dc: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x3623dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x3623e0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x3623e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3623e4: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x3623e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x3623e8: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x3623e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x3623ec: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x3623ecu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x3623f0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3623f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3623f4: 0x90420348  lbu         $v0, 0x348($v0)
    ctx->pc = 0x3623f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 840)));
    // 0x3623f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3623f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3623fc: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x3623fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x362400: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x362400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x362404: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x362404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x362408: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x362408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x36240c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x36240cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x362410: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x362410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x362414: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x362414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x362418: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x362418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x36241c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x36241cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x362420: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x362420u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x362424: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x362424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x362428: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x362428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x36242c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x36242cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x362430: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x362430u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x362434: 0x24024124  addiu       $v0, $zero, 0x4124
    ctx->pc = 0x362434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16676));
    // 0x362438: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x362438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x36243c: 0x3c021241  lui         $v0, 0x1241
    ctx->pc = 0x36243cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4673 << 16));
    // 0x362440: 0x34422412  ori         $v0, $v0, 0x2412
    ctx->pc = 0x362440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9234);
    // 0x362444: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x362444u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x362448: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x362448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36244c: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x36244cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x362450: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x362450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x362454: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x362454u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x362458: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x362458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36245c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x36245cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x362460: 0x3e00008  jr          $ra
    ctx->pc = 0x362460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362468u;
}
